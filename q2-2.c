#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int temperature = get_int("Enter temperature: ");

    if (temperature < 15)
    {
        printf("Category: Cold\n");
    }
    else if (temperature <= 24)
    {
        printf("Category: Mild\n");
    }
    else if (temperature <= 34)
    {
        printf("Category: Warm\n");
    }
    else
    {
        printf("Category: Hot\n");
    }
    return 0;
}
