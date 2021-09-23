
#include <stdio.h>

int main(){
    int n = 6;
    int x[]={1,2,3,4,5,};
    int b[]={5,4,3,2,1};
    int c[n];
    int i,j,z=1,k=0;
    for(i=0;i<n;i++){
        for(j=4;j>0;j--){
            if(x[i+1]==b[j]){
                c[j]=z;
                z++;
                
            }
        }
        z=1;
    }
    for(i=4;i>0;i--){
        if(c[i]==1){
            k++;
        }
    }
    printf("%i",k);
    printf("%d",x[5]);
    
}
