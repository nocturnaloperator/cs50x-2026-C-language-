#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int cents;

    // ask for input
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    int coins = 0;

    // quarters
    coins += cents / 25;
    cents %= 25;

    // dimes
    coins += cents / 10;
    cents %= 10;

    // nickels
    coins += cents / 5;
    cents %= 5;

    // pennies
    coins += cents;

    printf("%i\n", coins);
}
