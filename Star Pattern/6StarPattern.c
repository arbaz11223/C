#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter a Number: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j==0 || i==0 || i==n-1 || j==n-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
return 0;
}
