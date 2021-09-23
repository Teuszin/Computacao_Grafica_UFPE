#include <stdio.h>
#include <math.h>

int main(){

    int num,x,resto,quad1,quad2;
    scanf("%d",&num);
    while (num != 0){
        x = num / 2;
        resto = num - x;
        quad1 = pow(resto,2);
        quad2 = pow((resto - 1),2);
        printf("%d - %d\n", quad1, quad2);
        scanf("%d",&num);
    }
}