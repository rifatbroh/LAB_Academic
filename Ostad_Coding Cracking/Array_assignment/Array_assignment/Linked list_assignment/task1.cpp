/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
/*
    Time complexity: O(n);
    space complexity: O(1);
*/
void insert_at_tail(Node* &head, int x)
{
    Node* newNode = new Node(x);
    if (head == NULL){
        head = newNode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void print_reverse(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    // suppose we assume a array
    Node* head = NULL;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    // insert each node as reverse
    for (int i=n-1; i>=0; i--){
        insert_at_tail(head, v[i]);
    }
    print_reverse(head);
    return 0;
}