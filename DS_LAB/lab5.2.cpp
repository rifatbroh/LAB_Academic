/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node* &head, int val)
{
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void print_list(Node* head)
{
    int cnt = 0;
    Node* tmp = head;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    cout << "Number of nodes: "<<cnt;
}

int main()
{
    Node* head = NULL;   
    int n, val, element;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        insert_tail(head, val);
    }
    
    // Print the list
    cout << "Output: ";
    print_list(head);
    
    return 0;
}
