#include<stdio.h>
#include<string.h>
int is_palindrome(char a[])
{
    int length = strlen(a);
    char b[length];
    strcpy(b, a);
    // loop 
    int i=0;
    int j=length-1;
    while(i<j)
    {
        int temp = a[i];
        a[i] =b[j];
        b[j]= temp;
        i++;
        j--;
    }
    int x= strcmp(a,b);
    return x;
}
int main()
{
    char a[1001];
    scanf("%s", &a);
    int m= is_palindrome(a);
    if (m==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}