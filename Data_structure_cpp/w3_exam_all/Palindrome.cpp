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

void print_reverse(Node *&head, Node *val)
{
    if(val->next == NULL)
    {
        head = val;
        return;
    }
    print_reverse(head, val->next);
    val->next->next = val;
    val->next = NULL;

}



// void print_linked_list(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }

bool is_palindrome(Node *head)
{
    Node* newHead = NULL;
    Node* newTail = NULL;
    Node* temp = head;

    while(temp != NULL)
    {
        insert_tail(newHead, newTail, temp->val);
        temp = temp->next;
    }

    print_reverse(newHead, newHead);
    
    temp = head;
    Node* temp2 = newHead;

    while(temp != NULL)
    {
        if(temp->val != temp2->val)
        {
            return false;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    return true;

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

    string ans= (is_palindrome(head)) ? "YES" : "NO";
    cout << ans;
    
    // if (is_palindrome(head))
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }
    // print_linked_list(head);
    
    
    return 0;
}    