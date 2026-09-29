#include <stdio.h>
int main()
{
    int a,b, result;
    printf("Enter first Number:");
    scanf("%d",&a);

    printf("Enter Second Number:");
    scanf("%d",&b);

    result= a &b;
    printf("AND Result =%d",result);
    return 0;

}
