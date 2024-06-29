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
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

bool search_list(Node* &head, int element)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        if (tmp->val == element)
            return true;
        tmp = tmp->next;
    }
    return false;
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
    
    cout << "Enter element to search: ";
    cin >> element;
    
    if (search_list(head, element))
        cout << "Found" << endl;
    else
        cout << "Not found" << endl;
    
    return 0;
}
