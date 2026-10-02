#include <stdio.h>
#include <stdlib.h>

void zool(int x, char a, char z);

int main(void)
{
    zool(11, 'a', 'z');

    return EXIT_SUCCESS;
}

void zool(int x, char a, char z)
{
    printf("x: %d, a: %c, z: %c\n", x, a, z);
}