#include <stdio.h>
int main(void)
{
    printf("Do you Agree? ");
    char c = getchar();

    if ( c == 'y' || c == 'Y' )
    {
        printf("You Agree! \n");
    }
    else
    {
        printf("You Disagree! \n");
    }
}