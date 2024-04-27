#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    int len1 = str1.size();
    int len2 = str2.size();

    str1.resize(len1 + len2); 

    for (int i = 0; i < len2; i++)
        str1[len1 + i] = str2[i];

    cout << str1 << endl;

    return 0;
}
