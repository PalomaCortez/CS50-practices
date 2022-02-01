"""
Code written in Dec/2019 for pracice on CS50
https://github.com/me50/PalomaCortez/blob/cs50/problems/2019/x/caesar/caesar.c
https://github.com/me50/PalomaCortez/commit/4bb0fc0b91bf6dc742d7f284ca0107c9571e1fd7
"""
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[]) ///argument that allows to write words on prompt
{
    if (argc != 2 || atoi(argv[1]) == 0) //key must have only one argument
    {
        printf("caesar key\n");
        return 1;
    } 
    else
    {
        int key = atoi(argv[1]);
        string s = get_string("plaintext: ");  //get the original text
        printf("ciphertext: ");
        for (int i = 0; i < strlen(s); i++)
        {
            int c = (int) s[i]; // ASCII number of every char
            if (isupper(s[i]) != 0) //for uppercases
            {
                printf("%c", (((s[i] - 65) + key) % 26) + 65);
            }
            else if (islower(s[i]) != 0) // for lowercases
            {
                printf("%c", (((s[i] - 97) + key) % 26) + 97);
            }
            else //spaces, signs and other stuff
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
}
