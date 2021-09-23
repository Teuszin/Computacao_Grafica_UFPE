#include <stdio.h>

/*
int main(){
    int i=0,j=3,l = 2;
    for (;i < 4;i++){
        l++;
        for(;j>0;j--){
            l+=3;
        }
        l++;
    }   

    printf("\n%d", l);
}
*/



/*
int G(int r, int s){
    return (r>0)? s+1:s-1;

}

int F(int n){
    return (n>0)? n: -n;
}

float P = 0;
int B;

int main(){
    while (1) {
        scanf("%d",&B);
        P = G(B,P);
        printf("\n%f",P);
        if (B < 0) {
            printf("\n%f",P);
            break;
        }
        printf("\n%f",P);
        B = F(B);
        printf("\n%f",P);
    }
    
}
*/


/*
int main(){
    float _data;

_data = 2;

printf("\n%f", _data);
}
*/

/*
int main(){
    int j = 15, t =4;
    for(;(j<10) || (t<10); j-=2, t+=3){

        printf("Aaaaa\n %d",t+j);
    }
}

*/
int f(int a, int b){
    if (a < b){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int NUM;
    int B,A;
    for (int i = 0; i <5; i++){
        scanf("%d",NUM);
        if(i == 0){
            B = NUM;

        }else if(i ==j){
            if (f(B,NUM)){
                A = NUM;
            }else{
                A = B, B = NUM;
            }

        }else{
            if (f(NUM,B) && f(NUM,A)){
                A = B;
                B = NUM;
            }
            if ((f(B,NUM) && f(NUM,A)){
                A = NUM;
            }
        }

    }
}
