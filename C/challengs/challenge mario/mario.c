#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("Qual a altura que você deseja? ");
    if (height >= 1 && height < 10)
    {

        for (int j = 0; j < height; j++) //para repetir cada degrau da plataforma
        {
            for (int space = 0; space < height - j - 1; space++) //repetir a quantidade de espaço do dregrau subindo
            {
                printf(" ");
            }

            // "do" para gerar a plataforma
            int contador = 0;
            do
            {
                printf("#");
                contador++;
            }
            while (contador <= j); // depois que sair do loop ele vai criar dois de espaço entre as plataformas
            printf("  ");

            // do para a segunda plataforma
            int contador2 = 0;
            do
            {
                printf("#");
                contador2++;
            }
            while (contador2 <= j);
            printf("\n"); // depois de fazer uma linha ele pula a mesma e vai pra poxima
        }
    }
    else
    {
        printf("Coloque um numero de 1 a 10 \n");
        return 0;
    }
}
