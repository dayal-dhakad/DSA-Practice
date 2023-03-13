#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    //Destructor
    ~Node(){
        int val = this->data;
        if (next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for node with data "<<val<<endl;
      
        
    }
};

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &tail, Node *&head, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail,Node*&head, int d)
{
    if (tail==NULL)
    {
          Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
 Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }

   
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    // Insertion at start
    if (position == 1)
    {
        insertAtHead(tail, head, d);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // below code is written to update the last node as tail.
    if (temp->next == NULL)
    {
        insertAtTail(tail,head,  d);
        return;
    }

    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}

void deleteNode(int position, Node*&head)
{
    // deleting first node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    // deleting any middle or last node
    else
    {
        Node*curr = head;
        Node*prev = NULL;
        
        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr ->next;
            count++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        
        delete curr;

    }
}


int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    //  cout<<"length of list is "<<getLength(head)<<endl;

    insertAtHead(tail, head, 9);
    print(head);

    insertAtHead(tail, head, 8);
    print(head);

    insertAtHead(tail, head, 7);
    print(head);

    insertAtTail(tail,head, 15);
    print(head);

    insertAtTail(tail,head, 19);
    print(head);

    insertAtPosition(tail, head, 2, 100);
    print(head);

    insertAtPosition(tail, head, 1, 101);
    print(head);

// cout<<"head"<<head->data<<endl;
// cout<<"tail"<<tail->data<<endl;

  insertAtPosition(tail, head, 9, 999);
    print(head);

   deleteNode(1, head);

print(head);

   deleteNode(3, head);
print(head);

    return 0;
}