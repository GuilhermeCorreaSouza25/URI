#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char Frase[257];
    while (scanf("%[^\n]%*c", Frase) != EOF)
    {
        i = 0;
        while (Frase[i] != '\0')
        {
            if (Frase[i] == '@')
            {
                Frase[i] = 'a';
            }
            else if (Frase[i] == '&')
            {
                Frase[i] = 'e';
            }
            else if (Frase[i] == '!')
            {
                Frase[i] = 'i';
            }
            else if (Frase[i] == '*')
            {
                Frase[i] = 'o';
            }
            else if (Frase[i] == '#')
            {
                Frase[i] = 'u';
            }
            i++;
        }
        printf("%s", Frase);
        strcpy(Frase, "");
    }
}