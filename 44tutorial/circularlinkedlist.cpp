#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data " << val << endl;
    }
};

void insertAtTail(Node *&tail, int element, int d) //element is the already data present in the list
{
    // assuming that the element is present in the list

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non-empty list
        // assuming that element is present in the list

        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found curr is representing element wala node

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail){
  Node*temp = tail;
  do{
     cout<<tail->data<<" ";
    tail = tail->next;

  }while(tail != temp);
  cout<<endl;

  
}

int main()
{
Node*tail = NULL;
insertAtTail(tail, 5, 3);
print(tail);
insertAtTail(tail, 3, 5);
print(tail);
    return 0;
}