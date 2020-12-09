#include <cs50.h>
#include <stdio.h>
#include <math.h>
int num_of_coins(int cash, int coin_value);
int remainder_of_cash(int cash, int coin_value);
int main(void)
{
    float change_owed;
    int cash;
    int reminder;
    int num_of_25_coin = 0, num_of_10_coin = 0, num_of_5_coin = 0, num_of_1_coin = 0;
    int change;

    do
    {
        change_owed = get_float("change owed :\n");
    }
    while (change_owed < 0);

    cash = round(change_owed * 100);
    change = cash;
    if (change >= 25)
    {
        num_of_25_coin = num_of_coins(change, 25);
        change = remainder_of_cash(change, 25);
    }
    if (change >= 10)
    {
        num_of_10_coin = num_of_coins(change, 10);
        change = remainder_of_cash(change, 10);
        //  printf("the numer of coins is :%i\n", cons);
        //  printf("the change is :%i\n", change);
    }
    if (change >= 5)
    {
        num_of_5_coin = num_of_coins(change, 5);
        change = remainder_of_cash(change, 5);
        // printf("the numer of 5 coins in the function is :%i\n", num_of_5_coin);
    }
    if (change >= 1)
    {
        num_of_1_coin = num_of_coins(change, 1);
        change = remainder_of_cash(change, 1);

    }



    int total_coins_number = num_of_25_coin + num_of_10_coin + num_of_5_coin + num_of_1_coin;
    printf("the total numer of coins is :%i\n", total_coins_number);

}

int num_of_coins(int cash, int coin_value)
{
    int coinsNum = cash / coin_value;
    return coinsNum;
}
int remainder_of_cash(int cash, int coin_value)
{
    int remaind = cash % coin_value;
    return remaind;
}