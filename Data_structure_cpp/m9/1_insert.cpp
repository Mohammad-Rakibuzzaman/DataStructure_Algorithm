#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* prev;
        Node* next;
        
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};


void insertAtTail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}   

void printList(Node* head)
{
    while(head!=NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}


int main()
{
    
    Node* head = NULL;
    Node* tail = NULL;

    int val;

    while(true)
    {
        cin >> val;
        if(val == -1) break;

        insertAtTail(head, tail, val);
    }

    printList(head);



    return 0;
}