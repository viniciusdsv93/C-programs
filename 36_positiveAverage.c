#include <stdio.h>
 
int main() {
 
    float num, sum = 0;
    int total = 0, i;
    
    
    for (i = 0; i < 6; i++) {
        scanf("%f", &num);
        if (num > 0) {
            total ++;
            sum += num;
        }
    }
    
    printf("%i valores positivos\n", total);
    printf("%.1f\n", sum / total);
 
    return 0;
}
