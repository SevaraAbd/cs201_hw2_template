#include <iostream>
using namespace std;

class Node{
public:
    int value;
    Node *next;
    Node();
    Node(int x);
    Node(int x, Node *n);
};

class List{
private:
    Node* head;
public:
    List();
    
    Node* insert_front(int x);
    Node* insert_back(int x);
    Node* insert_afterMiddle(int x);
    Node* insert_after(int index, int x);
    
    Node* erase_front();
    Node* erase_back();
    Node* erase_middle();
    Node* erase_after(int index);
    
    int searchIndexByValue(int val);
    int searchValueByIndex(int index);
    
    void displayList();
};
int main(int argc, const char * argv[]) {
    List l;
    
    //test insert_front()
    for(int i=1;i<6;i++){
        l.insert_front(i);
    }
    cout<<"Test insert_front(): ";
    l.displayList();
    cout<<endl;
    
    //test insert_afterMiddle()
    l.insert_afterMiddle(100);
    cout<<"Test insert_afterMiddle(100): ";
    l.displayList();
    cout<<endl;
    
    //test insert_back()
    for(int i=6;i<11;i++){
        l.insert_back(i);
    }
    cout<<"Test insert_back(): ";
    l.displayList();
    cout<<endl;
    
    //test erase_middle()
    l.erase_middle();
    cout<<"Test erase_middle(): ";
    l.displayList();
    cout<<endl;
    
    //test erase_back()
    l.erase_back();
    cout<<"Test erase_back(): ";
    l.displayList();
    cout<<endl;
    
    //test insert_after()
    l.insert_after(4, 999);
    cout<<"Test insert_after(4,999): ";
    l.displayList();
    cout<<endl;
    
    //test erase_after()
    l.erase_after(4);
    cout<<"Test erase_after(4): ";
    l.displayList();
    cout<<endl;
    
    //test erase_front()
    l.erase_front();
    cout<<"Test erase_front(): ";
    l.displayList();
    cout<<endl;
    
    //test searchValueByIndex()
    cout<<"Test searchValueByIndex(3): "<<l.searchValueByIndex(3)<<endl;
    
    //test searchIndexByValue()
    cout<<"Test searchValueByIndex(3): "<<l.searchIndexByValue(3)<<endl;
    return 0;
}

