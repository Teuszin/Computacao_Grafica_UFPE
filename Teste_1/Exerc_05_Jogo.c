#include <stdio.h>

int main(){
    int num1, num2, mudanca;
    mudanca = 0;
    scanf("%d %d",&num1,&num2);
    
    if ((1 <= num1) && (1 <= num2) && (100000 >= num2) && (100000 >= num1)){

        if (num1 == num2){
            printf("%d", mudanca);
            return 0;
        }else{
            while (num1 > num2){
                
                if ((num1 - num2) == 1){
                    num1 += 2;
                    num2 += 3;
                    mudanca += 2;
                    printf("%d", mudanca);
                    return 0;
                }else{
                    if ((num1 - num2) == 2){
                        mudanca += 1;
                        num2 += 2;
                        printf("%d", mudanca);
                        return 0;
                    }else{
                        while ((num1 - num2) > 2){
                        
                            if ((num1 - num2) == 4){
                                num2 += 4;
                                mudanca += 2;
                                printf("%d", mudanca);
                                return 0;
                            }else{
                                num2 += 3;
                                mudanca += 1;
                            }
                        }
                    }
                }      
            }
            while (num2 > num1){
                
                if ((num2 - num1) == 1){
                    num2 += 2;
                    num1 += 3;
                    mudanca += 2;
                    printf("%d", mudanca);
                    return 0;
                }else{
                    if ((num2 - num1) == 2){
                        mudanca += 1;
                        num1 += 2;
                        printf("%d", mudanca);
                        return 0;
                    }else{
                        while ((num2 - num1) > 2){

                            if ((num2 - num1) == 4){
                                num1 += 4;
                                mudanca += 2;
                                printf("%d", mudanca);
                                return 0;
                            }else{
                            num1 += 3;
                            mudanca += 1;
                            }
                        }
                    }
                }      
            }
        }
    }
    printf("%d",mudanca);
}