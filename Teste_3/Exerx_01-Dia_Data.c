#include <stdio.h>

float modulo(float valor){
        if (valor > 0){
            return valor;
        }else{
            return -(valor);
        }
}


int main(){
    
    float dia1,dia2, mes1,mes2, ano1,ano2;
    float difDia,difMes,difAno;
    
    

    scanf("%f/%f/%f", &dia1,&mes1,&ano1);

    scanf("%f/%f/%f", &dia2,&mes2,&ano2);
     
    difDia = (dia1 - dia2)/2;
    difMes = (mes1 - mes2)/2;
    difAno = (ano1 - ano2)/2;

    printf("\n%0.f/%0.f/%0.f", difDia, difMes, difAno);

    difDia = modulo(difDia);
    difMes = modulo(difMes);
    difAno = modulo(difAno);

    if (dia1 > dia2){
        printf("\n%0.f/%0.f/%0.f 00:00", difDia, mes1 + difMes, ano1 + difAno);
    }
    if (mes1 > mes2)
    printf("\n%0.f/%0.f/%0.f", dia1 + difDia, difMes, ano1 + difAno);
    

    
    
}