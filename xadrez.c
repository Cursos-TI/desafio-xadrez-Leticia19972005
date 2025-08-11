#include <stdio.h>

int main() {
    int t = 1;
    int b = 1;
    int e = 1;
    int r;

    printf("Torre:\n");
    while (t <= 5)
    {
        printf("Direita\n");
        t++;
    }

    printf("\n");
    printf("Bispo:\n");
    do
    {
        printf("Cima,Direita\n");
        b++;
    } while (b<=5);

    printf("\n");
    printf("Rainha:\n");
    for (r = 1; r <= 8; r++)
    {
        printf("Esquerda\n");
    }
    printf("\n");
    printf("Cavalo:\n");
    for (int c = 1; c < 2; c++)
    {
        while (e<=2)
        {
            printf("Baixo\n");
            e++;
        }
        
        printf("Esquerda\n");
    }
    return 0;
}