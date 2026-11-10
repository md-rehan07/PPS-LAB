#include <stdio.h>
int main()
{
    int birthdays[5];
    printf("Enter your friends birthday :");
    for(int i=0;i<5;i++)
    {
        scanf("%d" , &birthdays[i]);
    }
    printf("Displaying integers-");

    for(int i=0;i<5;i++){
        printf("%d\t",birthdays[i]);
    }
    return 0;
}
