/*
    MD Rifat 

    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
void print_queue(queue<int> q){
    if (q.empty()){
        cout << "queue is empty" << endl;
        return;
    }
    cout << "queue elements: ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
int main()
{
    cout << "1. Insert Element"<< endl;
    cout << "2. Delete Element"<< endl;
    cout << "3. Print Stack's element" << endl;
    cout << "4. Terminated" << endl;

    queue<int> q;

    while(true){
        int opt;
        cout << "Choose option: ";
        cin >> opt;

        if (opt == 1){
            int val;
            cout << endl;
            cout << "Enter value for insert: ";
            cin >> val;
            q.push(val);
            cout << "Inserted: " << val << endl;
        }
        else if (opt == 2){
            if (!q.empty()){
                int remove = q.front();
                q.pop();
                cout << "Deleted: " << remove << endl;
            }
            else
                cout << "queue is empty! cannot delete" << endl;
        }
        else if (opt == 3)
            print_queue(q);
        else if (opt == 4){
            cout << "Program terminated." << endl;
            break;
        }
        else
            cout << "Choose correct option !" << endl;
    }
    return 0;
}