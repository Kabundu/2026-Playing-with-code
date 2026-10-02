#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 2;
    double y = 1.2;
    char z = 'A';

    printf("a. %d\n", x + 1);
    printf("b. %.1f\n", x + y);
    printf("c. %d\n", x / 3);
    printf("d. %f\n", x / 3.0);
    printf("e. %d\n", (int)y);
    printf("f. %d\n", (int)z);

    return EXIT_SUCCESS;
}
