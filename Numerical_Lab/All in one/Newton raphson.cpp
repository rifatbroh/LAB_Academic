/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;

float f(float x){
    return x*x*x -x-1;
}
float equ(float x){
    return 3*(x*x )-1;
}
float solve(float x)
{
    float tolerance = 1e-6, max_iter = 1000;
    for (int i = 0; i < max_iter; ++i)
    {
        float fx = f(x);
        float fpx = equ(x);

        float new_x = x - (fx / fpx);

        if (fabs(new_x - x) < tolerance){
            return new_x;
        }
        x = new_x;
    }
    return x;
}

int main ()
{
    float a=0;
    float b=1;

    while (f(a) * f(b) >= 0){
        a += 1;
        b += 1;
    }
    float root = solve(a);
    cout << "Root found: " << root << endl;

    return 0;
}