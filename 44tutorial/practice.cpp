#include<iostream>
using namespace std;
 
 class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this ->data = data;
        this -> next = NULL;
    }
 };
 
    void insertAtHead(Node* & head, int d){
        Node * temp = new Node(d);
        temp ->next = head;
        head = temp;
    }

    void insertAtTail(Node*&tail, int d){
        Node*temp = new Node(d);
        tail->next = temp;
      //  tail = tail-> next;
          tail = temp;
    }

    void print(Node* &head){
       Node* temp = head;

       while(temp != NULL){
         cout<< temp -> data<<" ";
         temp = temp->next;
       }
       cout<<endl;
    }

int main(){
 
 Node*node1 = new Node(10);
 Node*head = node1;
 Node*tail = node1;

 insertAtTail(tail, 12);
  print(head);

  insertAtTail(tail, 15);
 print(head);
  

return 0;
}