#include <stdio.h>
#include <string.h>

/*
5) Escreva um programa que inverta os caracteres de um string.
IMPORTANTE:
a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;

b) Evite usar funções prontas, como, por exemplo, reverse;
*/

char *invertida(char *palavra)
{
    int length = strlen(palavra);
    int aux, i, j;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        aux = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = aux;
    }

    return palavra;
}
int main(void)
{
    char palavra[] = "casa";

    printf("%s\n", invertida(palavra));

    return 0;
}