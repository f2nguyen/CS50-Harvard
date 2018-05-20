#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<math.h>

int main(void)
{
    long long cardNr;
    do
    {
    cardNr = get_long_long("Card number: ");
    } while (cardNr <= 0);

    int sumOdd = 0;
    int sumEven = 0;
    int firstDigit = 0;
    int firstTwoDigit = 0;
    int currentDigit = 0;
    int checkSum = 0;
    int lenCardNr = log10(cardNr) + 1;

    for (int count = 0; count < lenCardNr; count++)
    {
        currentDigit = cardNr % 10;
        // store first digit and two first digit of card number
        if (count == lenCardNr - 1)
        {
            firstDigit = currentDigit;
        }
        else if (count == lenCardNr - 2)
        {
            firstTwoDigit = cardNr;
        }

        if (count % 2 == 0)
        {
            sumOdd += currentDigit;
        }
        else
        {
            if (currentDigit * 2 < 10)
            {
                sumEven += currentDigit * 2;
            }
            else
            {
                sumEven += (currentDigit * 2) % 10 + (currentDigit *2) / 10;
            }
        }

        cardNr = cardNr/10;
    }

    checkSum = sumOdd + sumEven;

    if (checkSum % 10 == 0)
    {
        if (lenCardNr == 15 && (firstTwoDigit == 34 || firstTwoDigit == 37))
        {
            printf("AMEX\n");
        }
        else if (lenCardNr == 16 && (firstTwoDigit > 50 && firstTwoDigit < 56))
        {
            printf("MASTERCARD\n");
        }
        else if ((lenCardNr == 13 || lenCardNr == 16) && firstDigit == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }


}
