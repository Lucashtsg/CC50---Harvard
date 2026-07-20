#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    int quantidade;
    int quantidade_final;
    int anos = 0;
    do
    {
        quantidade = get_int("Digite o numero de animais inicial: ");
        quantidade_final = get_int("Digite o numero de animais desejado: ");
    }
    while (quantidade < 9 || quantidade_final <= quantidade);

    while (quantidade < quantidade_final)
    {
        quantidade = quantidade + (quantidade / 3) - (quantidade / 4);
        anos++;
    }

    printf("Anos: %i\n", anos);
}
