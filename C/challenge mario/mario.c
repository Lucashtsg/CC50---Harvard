#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("Qual a altura que você deseja? ");
    if (height >= 1 && height < 10)
    {

            for (int j = 0; j < height; j++)
            {
                for(int space = 0; space < height - j - 1; space++)
                {
                    printf(" ");
                }
                int contador = 0;
                do{
                    printf("#");
                    contador++;
                }while(contador <= j);
                printf("\n");
            }


    }
    else
    {
        printf("Coloque um numero de 1 a 10 \n");
        return 0;
    }
}
