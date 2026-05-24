
// Circular linklist

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
     data = value;
     next = NULL;
    }
};

class singleCircularLinkList{
    Node* head;
    Node* tail;
public:
    singleCircularLinkList(){
        head = tail = NULL;
    }

   void addToFront(int value){
      Node *newNode = new Node(value);
      if(head == NULL){
        head = tail = newNode;
        tail->next = head;
      }else{
        newNode->next = head;
        head = newNode;
        tail->next = head;
      }
    }

    void addToBack(int value){
       Node* newNode = new Node(value);
      if(head == NULL){
        head = tail = newNode;
        tail->next = head;
      }else{
        tail->next = newNode;
        tail = newNode;
        tail->next = head; 
      }

   }
void print(){
    if(head == NULL){
        cout << "List is Empty!" << endl;
        return;
    }

    Node* temp = head;

    do{
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp != head);

    cout << endl;
}

};




int main(){
singleCircularLinkList s;
s.addToBack(1);
s.addToBack(2);
s.addToBack(3);
s.addToBack(4);  
s.addToBack(5);  

s.print();


    return 0;
}