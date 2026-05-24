
// single Link List

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

class singleLinkList{
    Node* head;
    Node* tail;
public:
    singleLinkList(){
        head = tail = NULL;
    }

    void pushFront(int value){
        Node *newNode = new Node(value);
        if(head == NULL){
            head = newNode;
        }else{
             newNode -> next = head;
             head = newNode;
        }
    }

    void pushBack(int value){
        Node *newNode = new Node(value);
        if(head == NULL){
            tail = head = newNode;
        }else{
             tail -> next = newNode;
             tail = newNode;
        }
    }
    void insert(int value, int position){
         Node *newNode = new Node(value);
         Node* temp = head;

         for(int i=0; i<position-1; i++){
             temp = temp->next;
         }

         newNode->next = temp->next ;
         temp->next = newNode;

    }

    void popFront(){
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void popBack(){
         Node* temp = head;
         Node* p;

         while(temp->next->next != NULL){
            temp = temp->next;
         }
         p = temp->next;
         temp->next = NULL;
         delete p;
    }

    void deleteNthNode(int value){
        Node* temp = head;
        Node* p;
        while(temp->next->data != value){
            temp = temp->next;
        }
        p = temp->next;
        temp->next = p->next;
        delete p;

    }

    void printLinkList(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"-> ";
            temp = temp->next;
        }
    }
};


int main(){
    int arr[] = {3,4, 5, 6, 7, 8, 9};

    singleLinkList s;
    cout<<"Element of linklist : ";
    s.pushBack(1);
    s.pushBack(2);
    s.pushBack(3);
    s.pushBack(4);
    s.pushBack(5);
    s.insert(14,3);
    s.printLinkList();

   


    return 0;
}