#include <stdio.h>
 
int main() {
 
    int i, j, k, testCases, num1, num2, sum = 0;
    
    scanf("%i", &testCases);
    
    for (i = 0; i < testCases; i++) {
        scanf("%i %i", &num1, &num2);
        if (num1 < num2) {
            for (j = num1 + 1; j < num2; j++) {
                if (j % 2 != 0) {
                    sum += j;
                }
            }
            printf("%i\n", sum);
            sum = 0;
        }
        else if (num2 < num1) {
            for (k = num1 - 1; k > num2; k--) {
                if (k % 2 != 0) {
                    sum += k;
                }
            }
            printf("%i\n", sum);
            sum = 0;
        }
        else if (num1 == num2) {
        	printf("%i\n", sum);
		}
        
    }
 
    return 0;
}
