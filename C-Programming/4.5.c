#include <stdio.h>
#include <stdlib.h>

void bottles(int);

int main()
{
    bottles(99);

    return 0;
}

void bottles(int number)
{
    if(number == 0)
    {
        puts("No bottles of beer on the wall, no bottles of beer,");
        puts("ya' can't take one down, ya' can't pass it around,");
        puts("'cause there are no more bottles of beer on the wall!");
    }
    else
    {
        printf("%d bottles of beer on the wall, %d bottles of beer,\n",
               number, number);

        printf("ya' take one down, ya' pass it around, %d bottles of beer on the wall.\n\n",
               number - 1);

        bottles(number - 1);
    }
}