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
        Node (int val){
            this->val = val;
            this->next = NULL;
        }
};
/*
    The overall time complexity: O(n^2); 
    The overall space complexity: O(n);
    NOTE: -> due to array and linked list;
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
void print_merge(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
} 
int main()
{
    /*
        suppose we assume, user have n size
        of two array and make it merged
    */
    Node* head = NULL;
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i=0; i<n; i++) cin >> a[i] >> b[i];

    vector<int> merged_list;
    merged_list.reserve(2 * n);
    merged_list.insert(merged_list.end(), a.begin(), a.end());
    merged_list.insert(merged_list.end(), b.begin(), b.end());

    sort(merged_list.begin(), merged_list.end());

    for (int i=0; i<merged_list.size(); i++){
        insert_at_tail(head, merged_list[i]);
    }
    print_merge(head);
    
    return 0;
}