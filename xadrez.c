#include <stdio.h>

void bispo (int a) {
    if (a>0) {
        int v = 1;
        while (v<2)
        {
            int h = 0;
            printf("Cima,");
            v++;
            
            while (h<1)
            {
                printf("Direita\n");
                h++;
            }
        }
        bispo(a - 1);
    }
}
void torre (int b) {
    if (b > 0){
        int d = 0;
            printf("Direita\n");
        torre(b-1);
    }
}
void rainha (int c) {
    if (c > 0){
        int e = 0;
            printf("Esquerda\n");
        rainha(c-1);
    }
}


int main() {

    printf("Torre:\n");
    torre(5);
    
    printf("\n");
    printf("Bispo:\n");
    bispo(5);

    printf("\n");
    printf("Rainha:\n");
    rainha(8);

    printf("\n");
    printf("Cavalo:\n");
    for (int u = 0; u < 2 ; u++){
            printf("Cima\n");
            if (u==1)
            {
                printf("Direita\n");
            }  
    }
    return 0;
}