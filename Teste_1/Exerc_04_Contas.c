#include <stdio.h>

int main(){
    int consumo,basico,prec1,prec2,prec3;

    scanf("%d",&consumo);
    basico = 7;
    prec1 = 7 + (consumo - 10);
    prec2 = 27  + ((consumo - 30)*2);
    prec3 = 167  + ((consumo - 100)*5);

    if ((consumo >= 0  && consumo <= 10)){
        printf("%d", basico);
        return 0;
    }
    if (consumo >= 11  && consumo <= 30){
        
        printf("%d", prec1);
        return 0;
    }
    if (consumo >= 31  && consumo <= 100){
        printf("%d", prec2);
    }
    if (consumo >= 101  && consumo <= 1000){
        printf("%d", prec3);
    }

}