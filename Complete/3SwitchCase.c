#include <stdio.h>

int main()
{
    int day;

    printf("Enter Day Number: ");
    scanf("%d",&day);

    switch(day)
    {
    case 1:
    printf("SUDNAY\n");
    break;

    case 2:
    printf("MONDAY\n");
    break;

    case 3:
    printf("TUESDAY\n");
    break;

    case 4:
    printf("WEDNESDAY\n");
    break;

    case 5:
    printf("THURSDAY\n");
    break;

    case 6:
    printf("FRIDAY\n");
    break;

    case 7:
    printf("SATURDAY\n");
    break;

    default:
    printf("IT IS NOTE A WEEK DAY\n");
    }
    return 0;
}