#include <iostream>
using namespace std;

class Node
{
public:         //    _______________________________
    int data;   //   |  data  |  address of next node|
    Node *next; //   |________|______________________|

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is freed for node with data "<<value<<endl;
    }

};

void insertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{

    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    // In below code if we enter 1 as position then the element is inserted at the 2nd position thats why it is important to write above code.

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
        insertAtTail(tail, d);
        return;
    }

    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

// Printing

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}




//Deleting

void deleteNode(int position, Node*&head)
{
    // deleting first node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free by using destructor
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

        prev->next = curr->next;
        curr->next = NULL;
        
        delete curr;

    }
}

int main()
{

    Node *node1 = new Node(10);
    //  cout<< node1->data<<endl;
    //  cout<< node1->next<<endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(tail, head, 1, 8);
    print(head);

    insertAtPosition(tail, head, 5, 16);
    print(head);
    

    deleteNode(1, head);
    print(head);


return 0;
}
