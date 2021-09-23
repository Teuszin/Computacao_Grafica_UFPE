#include <stdio.h>

int main(void) {
	int N, P, competidores = 0, x, y;
	scanf("%i %i",&N,&P);
	
	for(int i = 0; i < N; i++){
		scanf("%i %i",&x,&y);
		if(!(x==0 || y==0)){
            if (x + y >= P) {
				competidores++;
		    }
        }
	}

	printf("%i\n",competidores);
	
	return 0;
}