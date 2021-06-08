#include <stdio.h>


int main(){
    float dias_com_carro,valor_km,quant_km,desconto;
    printf("Digite a quantidade de dias de locacao:");
    scanf("%f",&dias_com_carro);
    printf("Digite a quantidade de km rodados:");
    scanf("%f",&quant_km);
    valor_km = (dias_com_carro * 30.0) + (quant_km * 0.01);
    desconto = valor_km - (valor_km * 0.1);
    printf("Valor a pagar pelo aluguel: %.4f",desconto);
    
}