#include<stdio.h>
int main()
{
    int i,j,n,s;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(s=0;s<i;s++)
        {
            printf(" ");
        }
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}