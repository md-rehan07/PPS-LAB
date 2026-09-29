#include <stdio.h>
int main()
{
    int n,i,fact;
    printf("Enter the Number");
    scanf("%d",&n);
    fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial=%d",fact);
    return 0;
}
