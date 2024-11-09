/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
vector<float> v;

float f(float x) {
    return 3*x - cos(x) - 1;
}

float equation(float a, float b) {
    // for regular falsi method
    float c = (a*f(b) - b*f(a)) / f(b)-f(a);

    if (find(v.begin(), v.end(), c) != v.end())
        return c;
    else
        v.push_back(c);

    if (f(a) * f(c) <= 0)
        return equation(a, c);
    else
        return equation(c, b);
}

int main()
{
    float a, b;
    cin >> a >> b;
    while (f(a) * f(b) >= 0) {
        a++;
        b++;
    }

    cout << "The root of the equation (3x - cos(x) - 1) is: ";
    cout << equation(a, b) << endl;

    return 0;
}