#include <stdio.h>

int main()
{

    int i,j,n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        for(j=n; j>=i; j--)
        {
            printf("%c",j+65);
        }
        printf("\n");
    }


    return 0;
}