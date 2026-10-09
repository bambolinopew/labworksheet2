#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int price = get_int("Price of one notebook: ");
    int quantity = get_int("Number of notebooks: ");

    int total = price * quantity;
    int change = 500 - total;
    float average = (float) total / quantity;

    printf("Total cost: %i\n", total);
    printf("Change: %i\n", change);
    printf("Average cost: %.2f\n", average);
    return 0;
}
