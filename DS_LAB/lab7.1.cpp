#include<bits/stdc++.h>
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
void delateNode(Node* head, int pos)
{
    Node* tmp = head;
    for (int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next;
    }
    Node* delateNode = tmp->next;
    tmp->next = tmp->next->next;
    delete delateNode;
}
int main()
{
    Node* head = new Node(1);
    Node* a = new Node(2);
    Node* b = new Node(3);
    Node* c = new Node(4);
    Node* d = new Node(5);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    Node* tmp = head;
    int pos, v;
    cout << "Delate index valu: ";
    cin >> pos;
 
    delateNode(head, pos);
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    
    return 0;
}