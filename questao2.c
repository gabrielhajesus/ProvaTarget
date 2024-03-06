#include <stdio.h>

/*Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...),
escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence
ou não a sequência.
IMPORTANTE:
Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;
*/

int main()
{
    int antant, ant, atual, comparativo;

    antant = 0;
    ant = 1;

    scanf("%d", &comparativo);

    for (int i = 0; i <= comparativo + 2; i++)
    {
        atual = antant + ant;
        antant = ant;
        ant = atual;
        if (comparativo == atual)
        {
            printf("O numero %d informado está contido na sequencia de Fibonacci", comparativo);
            return 0;
        }
    }

    printf("O numero %d informado não está contido na sequencia de Fibonacci", comparativo);
    return 0;
}
