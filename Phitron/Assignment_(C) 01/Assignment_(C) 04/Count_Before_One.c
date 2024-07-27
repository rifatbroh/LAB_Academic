#include<stdio.h>
int count_before_one(int a[], int size)
{
    int count =0;
    for (int i=0; i<size; i++)
    {
        if (a[i]==1)
        {
            break;
        }
        count++;
    }
    return count;
}
// main function
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    // input
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    // function part
    //int size = sizeof(a[n])/sizeof(a[0]);

    int x = count_before_one(a, n);

    printf("%d\n",x);
    return 0;
}