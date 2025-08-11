#include <stdio.h>

int main() {
    int t = 1;
    int b = 1;
    int r;

    printf("Torre:\n");
    while (t <= 5)
    {
        printf("Direita\n");
        t++;
    }
    printf("Bispo:\n");
    do
    {
        printf("Cima,Direita\n");
        b++;
    } while (b<=5);
    printf("Rainha:\n");
    for (r = 1; r <= 8; r++)
    {
        printf("Esquerda\n");
    }
    
    return 0;
}