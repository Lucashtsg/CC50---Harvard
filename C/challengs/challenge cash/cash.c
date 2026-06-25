#include <cs50.h>
#include <stdio.h>
#include <math.h>

// Farei com moedas brasileiras, 5 centavos, 10 centavos, 25 centavos, 50 centavos

int main(void)
{
    float troco = get_float("Digite a quantidade do troco: ");
    int centavos = round(troco * 100); //passando o valor para centavos

    int contador50 = 0;
    int contador25 = 0;
    int contador10 = 0;
    int contador5 = 0;
    float restante;
    while (centavos >= 50)
    {
        centavos -= 50; // (-=) : é um operador de atribuição composta. Ele serve para subtrair um valor de uma variável e armazenar o novo resultado nela mesma
        contador50++;
    }
    while (centavos >= 25)
    {
        centavos -= 25;
        contador25++;
    }
    while (centavos >= 10)
    {
        centavos -= 10;
        contador10++;
    }
    while (centavos >= 5)
    {
        centavos -= 5;
        contador5++;
    }
    if (contador50 != 0)
    {
        printf("Quantidade de moedas de 50 centavos:%i\n", contador50);
    }
    if(contador25 != 0)
    {
        printf("Quantidade de moedas de 25 centavos:%i\n", contador25);
    }
    if(contador10 != 0)
    {
        printf("Quantidade de moedas de 10 centavos:%i\n", contador10);
    }
    if(contador5 != 0)
    {
        printf("Quantidade de moedas de 5 centavos:%i\n", contador5);
    }
}
