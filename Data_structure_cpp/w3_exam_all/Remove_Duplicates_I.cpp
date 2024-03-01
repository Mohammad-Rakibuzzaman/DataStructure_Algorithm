#include <bits/stdc++.h>
using namespace std; 
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

Node* delete_duplicate(Node* head)
{
    Node* temp = head;

    if(head == NULL)
    {
        return head;
    }

    while(temp->next != NULL)
    {
        if(temp->val == temp->next->val)
        {
            Node* deleteNode = temp->next;
            temp->next = deleteNode->next;

            delete deleteNode;
        }
        else 
        {
            temp = temp->next;
        }
    }

    return head;

}


void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    for (Node* i = head; i->next != NULL; i = i->next) 
    {
        for (Node* j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }

    delete_duplicate(head);
    
    print_linked_list(head);
    

    return 0;
}