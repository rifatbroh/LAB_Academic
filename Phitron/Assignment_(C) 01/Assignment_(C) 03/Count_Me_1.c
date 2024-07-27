#include<stdio.h>
int main()
{
    int count = 0, sum=0;
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n; i++)
    {
        if (a[i]%2 == 0 && a[i]%3 == 0)
        {
            if (a[i]%2 == 0)
            {
                count++;
            }
        }
        else
        {
            if (a[i]%2 == 0)
            {
                count++;
            }
            else if (a[i]%3 == 0)
            {
                sum++;
            }
        }
         
    }
    printf("%d %d", count, sum);
    return 0;
}