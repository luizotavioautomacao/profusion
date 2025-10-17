#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int arePermutations(char *c1, char *c2)
{
    size_t len1 = strlen(c1), len2 = strlen(c2);
    if (len1 != len2)
    {
        printf("Tamanhos diferentes NÃO são permutas!");
        return 0;
    }
    int ASCII[256] = {0};
    for (int i = 0; c1[i]; i++)
    {
        unsigned char c = c1[i];
        if (ASCII[c] > 0)
        {
            ASCII[c++];
        }
    }
    for (int i = 0; c2[i]; i++)
    {
        unsigned char c = c2[i];
        if (ASCII[c] > 0)
        {
            ASCII[c--];
        }
    }
    for (int i = 0; i < 256; i++)
    {
        if (ASCII[i] > 0)
            return 0;
    }
    return 1;
}

int main()
{
    char *txt1 = NULL, *txt2 = NULL;
    size_t buffer1 = 0;
    size_t buffer2 = 0;

    printf("Digite o texto 1: ");
    getline(&txt1, &buffer1, stdin);
    txt1[strcspn(txt1, "\n")] = '\0';

    printf("Digite o texto 2: ");
    getline(&txt2, &buffer2, stdin);
    txt2[strcspn(txt2, "\n")] = '\0';

    if (arePermutations(txt1, txt2))
        printf("São permutas! \n");
    else
        printf("NÃO são permutas! \n");

    free(txt1);
    free(txt2);
    return 0;
}