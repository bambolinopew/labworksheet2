#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter number of days: ");

    if (n < 1 || n > 10)
    {
        printf("Invalid input\n");
        return 0;
    }

    int total = 0;

    for (int i = 1; i <= n; i++)
    {
        int amount = get_int("Enter amount saved: ");

        if (amount < 0 || amount > 1000)
        {
            printf("Invalid input\n");
            return 0;
        }

        total = total + amount;
    }

    float average = (float) total / n;

    printf("Total savings: %i\n", total);
    printf("Average daily savings: %.2f\n", average);
    return 0;
}
