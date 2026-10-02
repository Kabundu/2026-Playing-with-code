#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;

    printf("Enter a digit from 0 to 9: ");
    input = getchar();

    if(input < '0' || input > '9')
    {
        puts("Error: input must be a digit from 0 to 9.");
        return 1;
    }

    printf("You entered: %c\n", input);

    return 0;
}