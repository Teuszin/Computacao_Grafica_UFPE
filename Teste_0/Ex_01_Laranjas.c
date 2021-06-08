#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    float laranjas,valor;
    int duzias, quantia;
    printf("digite as laranjas: \n");
    scanf("%f", &laranjas);
    valor = laranjas * 0.69583;
    if (laranjas <= 0){
        printf("Esse é um valor inválido");
    }else{
        if (laranjas < 12){
            printf("\nVocê comprou apenas %1.f",laranjas);
            printf(" unidades.\n");
            printf("E um valor total de R$%.2f",valor);
        }
        duzias = laranjas / 12;
        printf("\nDeu um total de: %i", duzias);
        while (laranjas > 12){
        laranjas = laranjas - 12;
        }
        quantia = laranjas;
        printf(" duzia(s) e mais %d laranjas.",quantia);
        printf("\nE um valor total de R$%.2f.",valor);
        }
    
    
        
}