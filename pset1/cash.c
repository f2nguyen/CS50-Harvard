#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    float cashChange = get_float("Change is owned: ");
    float cash = roundf(cashChange * 100);
    int coin25 = (int)cash / 25;
    int coin10 = ((int)cash % 25) / 10;
    int coin5 = (((int)cash % 25) % 10) / 5;
    int coin1 = (((int)cash % 25) % 10) % 5;
    printf("%i\n", coin25 + coin10 + coin5 + coin1);
}