#include <stdio.h>
#include <math.h>


int main(){

    int i, numero;
    double e1 = 0, e2 = 0, e3 = 3.0,sinal = 1;
    scanf ("%d", &numero);
    if ((numero >= 1) && (numero <= 1000)){
        
        // Equação 1
        for(i = 0; i < numero; i++){ 
            e1 += (pow(-1.0,i))/((2.0*i) + 1.0);
        }
        e1 *= 4.0;
        
        // Equação 2
        for(i = 0; i < numero; i++){ 
            e2 += 2.0 / ((4.0*i + 1.0)*(4.0*i + 3.0));
        }
        e2 *= 4.0;
        
        // Equação 3
        int den[3] = {2, 3, 4};
        for(i = 0; i < numero-1; i++){ 
            e3 += (4.0 * pow(-1, i)) / (den[0] * den[1] * den[2]);
            den[0] += 2.0;
            den[1] += 2.0;
            den[2] += 2.0;
        }
        
        printf("%.6lf - %.6lf\n", e1, e1 / M_PI);
        printf("%.6lf - %.6lf\n", e2, e2 / M_PI);
        printf("%.6lf - %.6lf\n", e3, e3 / M_PI);
    }

}