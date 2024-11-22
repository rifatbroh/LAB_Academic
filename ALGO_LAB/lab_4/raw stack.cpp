/*
    MD Rifat 

    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
void print_stack(stack<int> st){
    if (st.empty()){
        cout << "stack is empty" << endl;
        return;
    }
    cout << "Stack elements: ";
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
int main()
{
    cout << "1. Insert Element"<< endl;
    cout << "2. Delete Element"<< endl;
    cout << "3. Print Stack's element" << endl;
    cout << "4. Terminated" << endl;

    stack<int> st;

    while(true){
        int opt;
        cout << "Choose option: ";
        cin >> opt;

        if (opt == 1){
            int val;
            cout << endl;
            cout << "Enter value for insert: ";
            cin >> val;
            st.push(val);
            cout << "Inserted: " << val << endl;
        }
        else if (opt == 2){
            if (!st.empty()){
                int remove = st.top();
                st.pop();
                cout << "Deleted: " << remove << endl;
            }
            else
                cout << "Stack is empty! cannot delete" << endl;
        }
        else if (opt == 3)
            print_stack(st);
        else if (opt == 4){
            cout << "Program terminated." << endl;
            break;
        }
        else
            cout << "Choose correct option !" << endl;
    }
    return 0;
}