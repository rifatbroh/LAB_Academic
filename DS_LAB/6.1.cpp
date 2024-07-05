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
        Node* next = NULL;
        Node (int val)
        {
            this->val = val;
            this->next = NULL;
        }
};
void insert_at_beginning(Node* &head, int v)
{
    Node* newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout<< endl << "inserted at beginning"<<endl<<endl;
}
void insert_after_node(Node* &head, int target, int v)
{
    Node* newNode = new Node(v);
    if (head == NULL)
    {
        cout << "Not found"<<endl;
    }
    Node* tmp = head;
    while(tmp != NULL && tmp->val != target)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void print_linked_list (Node* head)
{
    cout << "The linked list is: ";
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
    cout << endl << endl;
}
int main()
{   
    Node* head =  NULL;
    while(true)
    {
        cout << "Option 1: Insert at beginning" << endl;
        cout << "Option 2: Insert after a given node" << endl;
        cout << "Option 3: print linked list" << endl;
        cout << "Option 0: Terminate the program" << endl;
        
        int option;
        cin >> option;
        if (option == 1)
        {
            cout << "Please Enter value: ";
            int v;
            cin >> v;
            insert_at_beginning(head, v);
        }
        else if(option == 2)
        {
            cout << "Please Enter a target value: ";
            int target;
            cin >> target;
            cout << "Please Enter value: ";
            int v;
            cin >> v;
            insert_after_node(head,target,v);
        }
        else if (option == 3)
            print_linked_list(head);
        else if(option == 0)
            break;
        else
            cout <<"Invalid option. Please try again" << endl;
    }
    return 0;
}