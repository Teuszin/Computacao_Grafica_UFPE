#include <stdio.h>
#include <math.h>


int main(){
    
    float e1 = 0, e2 = 0, e3 = 3, n, sinal = 1, i;
    scanf ("%d", &n);
    for(i = 0; i < n; i++){
        e1 += sinal/(2*i + 1);
        sinal *= -1;
    }
    e1 *= 4;
    for(i = 0; i < n; i++){
        e2 += 2/((4*i + 1)*(4*i + 3));
    }
    e2 *= 4;
    sinal = 1;
    for(i = 1; i < n; i++){
        e3 += sinal*4/((2*i)+(2*i + 1)+(2*i + 2));
        sinal *= -1;
    }
    printf("%f - %Lf\n", e1, M_PI);
    printf("%f - %Lf\n", e2, (e2 / M_PI));
    printf("%f - %Lf", e3, (e3 / M_PI));
}