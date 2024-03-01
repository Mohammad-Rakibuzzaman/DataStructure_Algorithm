#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node *head) {
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp  = tmp ->next;
    } 
    cout << endl;
}

int size_a(Node *head) {
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int size_b(Node *head2) {
    Node *tmp2 = head2;
    int count2 = 0;
    while (tmp2 != NULL) {
        count2++;
        tmp2 = tmp2->next;
    }
    return count2;
}

int main() {
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int a;   
    while (true) {
        cin >> a;
        if (a == -1)
            break;
        insert_tail(head1, tail1, a);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    int b;   
    while (true) {
        cin >> b;
        if (b == -1)
            break;
        insert_tail(head2, tail2, b);
    }

    int size1 = size_a(head1);
    int size2 = size_b(head2);

    if (size1 != size2) {
        cout << "NO";
    } 
    else 
    {
        int flag = 1;
        while (head1 != NULL && head2 != NULL) {
            if (head1->val != head2->val) {
                flag = 0;
                break;
            }
            head1 = head1->next;
            head2 = head2->next;
        }

        if (flag == 1 && head1 == NULL && head2 == NULL) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }

    return 0;
}
