#include <stdio.h>

int main(){

    float preco_gas_br, preco_gas_eua, cotacao, compar;
    scanf("%f", &preco_gas_eua);
    scanf("%f", &preco_gas_br);
    scanf("%f", &cotacao);

    compar = (preco_gas_eua * cotacao) / 3.8;
    printf("Gasolina EUA: R$ %.2f",compar);
    printf("\nGasolina Brasil: R$ %.2f",preco_gas_br);
    if (compar == preco_gas_br){
        printf("\nIgual");
    }else{
        if (compar < preco_gas_br){
            printf("\nMais barata nos EUA");
        }
        if (compar > preco_gas_br){
            printf("\nMais barata no Brasil");
        }
    }
    
}