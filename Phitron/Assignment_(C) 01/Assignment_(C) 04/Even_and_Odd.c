#include<stdio.h>
void odd_even(void)
{
    int even=0, odd=0;
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n; i++)
    {
        if (a[i]%2==0)
        {
            even++;
        }
        else if (a[i]%2==1)
        {
            odd++;
        }
    }
    printf("%d %d\n", even, odd);   
}
int main()
{
    odd_even();
    return 0;
}