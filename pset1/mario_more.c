#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Please enter a positive integer less than 23: ");
    } while(height < 0 || height > 23);
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < height; col++)
        {
            if (col < height - row - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("  ");
        for (int i = 0; i < row + 1; i++)
        {
            printf("#");
        }
        printf("\n");
    }

}