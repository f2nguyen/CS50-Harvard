#include<cs50.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int key = atoi(argv[1]);
        string plainText = get_string("plaintext: ");
        printf("ciphertext: ");
        int cipherIndex;
        for (int i = 0; i < strlen(plainText); i++)
        {
            if (isalpha(plainText[i]))
            {
                if (isupper(plainText[i]))
                {
                     cipherIndex = ((plainText[i] - 65) + key) % 26;
                     printf("%c", cipherIndex + 65);
                }
                else
                {
                    cipherIndex = ((plainText[i] - 97) + key) % 26;
                    printf("%c", cipherIndex + 97);
                }
            }
            else
                {
                    printf("%c", plainText[i]);
                }
        }
        printf("\n");
    }
    else
    {
        return 1;
    }
}