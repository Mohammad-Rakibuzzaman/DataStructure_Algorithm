#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
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
// void print_linked_list(Node *head)
// {
//     // Node *tmp = head;
//     // while (tmp != NULL)
//     // {
//     //     cout << tmp->val << " ";
//     //     tmp = tmp->next;
//     // }

    
//     // cout << endl;
// }

void print_min_max(Node *head)
{
    int maxx = INT_MIN;
    int minn = INT_MAX;

    for (Node *i = head; i != NULL; i = i->next)
    {
        if(i->val > maxx)
        {
            maxx = i->val; 
        }
        if(i->val < minn)
        {
            minn = i->val; 
        }
        
    }
    cout << maxx << " " << minn;
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
    // print_linked_list(head);
    print_min_max(head);
    return 0;
}