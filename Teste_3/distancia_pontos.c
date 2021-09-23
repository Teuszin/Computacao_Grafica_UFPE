#include <stdio.h>
#include <math.h>

float fazermodulo(float valor){
        if (valor > 0){
            return valor;
        }else{
            return -(valor);
        }
}

int main(){
    float x1,x2,y1,y2,modulo,test;
    
    scanf("%f %f %f %f", &x1,&x2,&y1,&y2);
    test = x2-x1;
    modulo = sqrt(pow(fazermodulo(x2-x1),2) + pow(fazermodulo(y2-y1),2));

    //printf("%0.f",test);
    
    printf("%0.f",modulo);

}