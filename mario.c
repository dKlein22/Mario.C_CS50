#include <stdio.h>
#include <cs50.h>

//Protótipo da função auxiliar
void print_row (int bricks, int height);

int main(void)
{
    int height;
    do
    {
        height = get_int("Qual a altura da piramide? ");
    }
    //Limite de altura e de blocos
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        //impressão da função
        print_row(i + 1, height);
    }
}


void print_row (int bricks, int height)
{
    //Espaço à esquerda
    for (int i = 0; i < height - bricks; i++)
    {
        printf(" ");
    }

    //Lado esquerdo da piramide
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }

    //Espaco no meio
    printf(" ");

    //Lado direito da piramide
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }

    printf("\n");
}
