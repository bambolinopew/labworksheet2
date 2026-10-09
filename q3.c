#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = get_int("Enter a number between 1 and 20: ");

    if (number < 1 || number > 20)
    {
        printf("Invalid number.\n");
    }
    else
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%i x %i = %i\n", number, i, number * i);
        }
    }
    return 0;
}
