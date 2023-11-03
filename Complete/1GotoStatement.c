#include <stdio.h>

int main()
{
    int age;
    
    printf("Enter your Age: ");
    scanf("%d",&age);

    if(age>18)
    goto Vote;
    else
    goto CanNotVote;

    Vote:
    printf("You Can Vote\n");
    exit (0);

    CanNotVote:
    printf("You Can't Vote\n");
    exit (0);


    return 0;
}