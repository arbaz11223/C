#include <stdio.h>

int main()
{
    int price;

    printf("Enter Price: ");
    scanf("%d",&price);

    if(price<200)
    {
        printf("NO DISCOUNT ALLOWED\n");
    }
    else if(price<=500)
    {
        printf("10 PERCENT DISCOUNT ALLOWED\n");
    }
    else if(price<=1000)
    {
        printf("20 PERCENT DISCOUNT ALLOWED\n");
    }
    else if(price<=2000)
    {
        printf("30 PERCENT DISCOUNT ALLOWED\n");
    }
    else
    {
        printf("50 PERCENT DISCOUNT ALLOWED\n");
    }
    return 0;

}