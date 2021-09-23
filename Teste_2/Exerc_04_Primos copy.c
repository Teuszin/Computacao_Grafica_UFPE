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
    int num_menor, num_maior,i;
    
    scanf("%d %d",&num_menor,&num_maior);
    for(int i = num_menor; i<=num_maior; i++){
        if ((ver_se_e_primo(i)) == 1){
            
            printf("%d",i);
            }
    }
    
}
