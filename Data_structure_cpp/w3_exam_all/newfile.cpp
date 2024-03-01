#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;
    
    Node(int val) {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;     
    }
};

void insert_at_Head(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_Tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int getSize(Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

void print_reverse(Node* tail) {
    Node* tmp = tail;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_at_position(Node* head, int x, int v) {
    Node* newNode = new Node(v);
    Node* tmp = head;
    for (int i = 1; i <= x - 1; i++) {
        tmp = tmp->next;
        if (tmp == NULL) {
            cout << "Invalid" << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    if (tmp->next != NULL) {
        tmp->next->prev = newNode;
    }
    tmp->next = newNode;
    newNode->prev = tmp;
}

void print_reverse_list(Node* tail) {
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void print_normal_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int q;
    cin >> q;

    Node* head = NULL;
    Node* tail = NULL;
    
    for (int i = 0; i < q; i++) {
        int x, v;
        cin >> x >> v;

        if (x > getSize(head)) {
            cout << "Invalid" << endl;
        }
        else if (x == 0) {
            insert_at_Head(head, tail, v);
        }
        else if (x == getSize(head)) {
            insert_at_Tail(head, tail, v);
        }
        else {
            insert_at_position(head, x, v);
        }

        print_normal_list(head);
        print_reverse_list(tail);
    }

    return 0;
}
