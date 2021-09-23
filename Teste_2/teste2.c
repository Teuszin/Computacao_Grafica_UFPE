#include <stdio.h>

int ver_se_e_primo(int a){
    int c;

    for (c = 2; c <= a - 1; c++){
        if (a % c == 0){
            return 0;
        }
    }
    if (c == a){
        return 1;
    }     
}

int main(){
    int num_menor, num_maior,i,listaprimo[9999],quant_primos=0,b,primos = 0,primozeca = 0;
    
    scanf("%d %d",&num_menor,&num_maior);
    

    
    for(int i = 3; i < num_maior+1000; i++){
        if ((ver_se_e_primo(i)) == 1){
            listaprimo[quant_primos] = i;
            quant_primos += 1;   
        }
            
    }
    for (b = 0; b < quant_primos; ++b){
            
        if(listaprimo[0+b] != 0 && listaprimo[2+b] != 0 && listaprimo[1+b] != 0){
            if (((listaprimo[0+b] + listaprimo[2+b]) / 2 == listaprimo[1+b])){
                if (listaprimo[1+b] >= num_menor && listaprimo[1+b] <= num_maior){
                    primozeca += 1;
                }
            }
        }
    }
    printf("%d",primozeca);
}
