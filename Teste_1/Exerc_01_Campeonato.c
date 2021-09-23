#include <stdio.h>

int main(){
    int Cv, Ce, Cs, Fv, Fe, Fs, Pc, Pf;
    
    scanf("%d %d %d %d %d %d", &Cv, &Ce, &Cs, &Fv, &Fe, &Fs);
    Pc = (Cv * 3) + (Ce * 1);
    Pf = (Fv * 3) + (Fe * 1);

    if (0 <= Cv && Ce, Fv, Fe <= 100 && -1000 <= Cs, Fs <= 1000){
      
        if (Pf == Pc){

            if (Cs > Fs){
                printf("C");
            }
            if (Fs > Cs){
                printf("F");
            }
            if (Fs == Cs){
                printf("=");
            }
        
        }else{
            if (Pc > Pf){
            printf("C");
            }
            if (Pf > Pc){
            printf("F");
            }
        }
    }
    
}