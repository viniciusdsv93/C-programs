#include <stdio.h>
 
int main() {
    
    int M = 1, N = 1, i, sum = 0;
    
    while (M != 0 || N != 0) {
        scanf("%i %i", &M, &N);
        
		if (M == 0 || N == 0) {
		    printf("\n");
        	break;
		}
        if (M < N) {
            for (i = M; i <= N; i++) {
                printf("%i ", i);
                sum += i;
            }
            printf("Sum=%i\n", sum);
            sum = 0;
        }
        else if (N < M) {
            for (i = N; i <= M; i++) {
                printf("%i ", i);
                sum += i;
            }
            printf("Sum=%i\n", sum);
            sum = 0;
        }
        
    }
    
    return 0;
}
