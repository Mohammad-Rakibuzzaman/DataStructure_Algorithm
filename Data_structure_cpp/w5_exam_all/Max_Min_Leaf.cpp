#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree()
{
    int val;
    cin >> val;
    Node* root;
    if(val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node*> q;
    if(root)
        q.push(root);

    while(!q.empty())
    {
        //out node
        Node *p = q.front();
        q.pop();

        //tasks
        int l, r;
        cin >> l >> r;
        Node *myLeft; 
        Node *myRight; 
        if(l == -1)
            myLeft = NULL;
        else 
            myLeft = new Node(l);

        if(r == -1)
            myRight = NULL;
        else 
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;
        
        //push children
        
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);


    }
    return root;

}

void count_leaf_val(Node* root, int &max_num, int &min_num)
{
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL)
    {
        max_num = max(max_num, root->val);
        min_num = min(min_num, root->val);
        return;
    }
    else
    {
        count_leaf_val(root->left, max_num, min_num);
        count_leaf_val(root->right, max_num, min_num);

    }
}


int main()
{
    Node* boot = input_tree();

    int max_num = INT_MIN;
    int min_num = INT_MAX;
    
    count_leaf_val(boot, max_num, min_num);

    cout << max_num << " " << min_num << endl;
    
    return 0;
}