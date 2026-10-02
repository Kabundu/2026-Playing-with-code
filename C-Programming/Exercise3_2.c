#include <stdio.h>
#include <stdlib.h>

void ping(void);
void baffle(void);
void zoop(void);

int main(void)
{
    printf("No, I ");
    zoop();
    printf("I ");
    baffle();

    return EXIT_SUCCESS;
}

void ping(void)
{
    printf(".\n");
}

void baffle(void)
{
    printf("wug");
    ping();
}

void zoop(void)
{
    baffle();
    printf("You wugga ");
    baffle();
}
r
