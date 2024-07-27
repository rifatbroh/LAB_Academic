#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
      
        int sum = m1 + m2;
        int day = d * m1;
        int calculate = day / sum;

        printf("%d\n", d - calculate);
    }
    return 0;
}