#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    string val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;     
    }
};

void insert_at_Head(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);

    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    Node* temp = head;

    newNode->next = head;
    temp->prev = newNode;
    head = newNode;
}



void insert_at_Tail(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_position(Node *head, int x, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= x - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;     
    tmp->next = newNode;           
    newNode->next->prev = newNode; 
    newNode->prev = tmp;          
}

int getSize(Node* head){
    int count = 0;
    while(head!=NULL){
        count++;
        head = head->next;
    }
    return count;
}

void printList(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{


    Node* head = NULL;
    Node* tail = NULL;
    
    string val;

    while(true){
        cin>>val;
        if(val== "end") break;

        //insertAtHead(head,tail,val);
    }

    int q;
    cin >> q;

    for(int i = 0; i <= q; i++)
    {
        string s;
        getline(cin, s);

        string prev;
        string next;
        string visit;
        if( )
        {   
            cout << "Invalid" <<endl;
            continue;
        }
        else if(x == 0)
        {
            insert_at_Head(head, tail, s);
        }
        else if(x == getSize(head))
        {
            insert_at_Tail(head, tail, v);
        }
        else
        {
            insert_at_position(head, x, v);
        }

    }


    return 0;
}