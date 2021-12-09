#include <stdio.h>
 
int main() {
 
    int num, i, total = 0;
    
    for (i = 0; i < 5; i++) {
        scanf("%i", &num);
        if (num % 2 == 0) {
            total++;
        }
    }
    
    printf("%i valores pares\n", total);
 
    return 0;
}
