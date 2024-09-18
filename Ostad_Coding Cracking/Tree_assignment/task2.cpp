#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *left;
    Node *right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
/*
    input: 4 2 7 1 3 -1 -1 -1 -1 -1 -1
    val  : 2
    output: 2 1 3

    input: 4 2 7 1 3 -1 -1 -1 -1 -1 -1
    val  : 5
    output: null
*/
Node* search(Node* root, int val) {
    if (root == NULL || root->val == val) {
        return root;
    }
    if (val < root->val)
        return search(root->left, val);
    else
        return search(root->right, val);
}

Node* input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty()) {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);
        p->left = myLeft;
        p->right = myRight;
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
/*
    Time complexity: O(n);
    Space complexity: O(1);
*/
int main()
{
    Node *root = input_tree();
    int val;
    cin >> val;
    Node *result = search(root, val);
    if (result) {
        queue<Node*> q;
        q.push(result);
        while (!q.empty()) {
            Node *node = q.front();
            q.pop();
            cout << node->val << " ";
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        cout << endl;
    } else {
        cout << "null" << endl;
    }
    return 0;
}
