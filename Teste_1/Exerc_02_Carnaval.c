#include <stdio.h>

int main(){

    float notas[5],media,temp;
    
    scanf("%f %f %f %f %f", &notas[0], &notas[1], &notas[2], &notas[3], &notas[4]);
    int i,f;
    for(i=0; i<5; i++){
        for(f=0; f<5; f++){

            if(notas[i] < notas[f]){     
                temp = notas[i];
                notas[i] = notas[f];
                notas[f] = temp;
            }
        }
    }
    media = notas[1] + notas[2] + notas[3];
    printf("%.1f", media);
}