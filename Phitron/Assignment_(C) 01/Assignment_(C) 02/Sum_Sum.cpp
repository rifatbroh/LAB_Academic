#include<stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum=0;
    int rum=0;
    for (int i=1; i<=n; i++)
    {
        if (a[i]>0)
        {
            sum = sum+a[i];
    
        }
        else if (a[i]<0)
        {
            rum = rum-a[i];
        }

    }
    printf("%d ", sum);
    printf("%d", rum*(-1));
    return 0;
}