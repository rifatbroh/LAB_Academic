#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    // testcase input
    int t;
    scanf("%d", &t);
    for (int i=0; i<t; i++)
    {
        // string input under testcase
        char a[10001];
        scanf("%s", &a);
        int capital=0, small=0, digit=0;

        for (int i=0; i<strlen(a); i++)
        {
            // using condition under loop
            // capital, small, digit
            if (isupper(a[i]))
            {
                capital++;
            }
            else if (islower(a[i]))
            {
                small++;
            }
            else if (isdigit(a[i]))
            {
                digit++;
            }
        }
        // finally print whole process in built in function
        printf("%d %d %d\n", capital, small, digit);
    }

    return 0;
}