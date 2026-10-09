#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int base = get_int("Enter base between 1 and 10: ");
    int exponent = get_int("Enter exponent between 0 and 8: ");

    if (base < 1 || base > 10 || exponent < 0 || exponent > 8)
    {
        printf("Invalid input.\n");
        return 0;
    }

    int result = 1;

    for (int i = 1; i <= exponent; i++)
    {
        result = result * base;
    }

    printf("%i\n", result);
    return 0;
}
