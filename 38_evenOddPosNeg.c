#include <stdio.h>
 
int main() {
 
    int num, i, even = 0, odd = 0, pos = 0, neg = 0;
    
    for (i = 0; i < 5; i++) {
        scanf("%i", &num);
        if (num % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        if (num > 0) {
            pos++;
        } else if (num < 0) {
            neg++;
        }
    }
    
    printf("%i valor(es) par(es)\n", even);
    printf("%i valor(es) impar(es)\n", odd);
    printf("%i valor(es) positivo(s)\n", pos);
    printf("%i valor(es) negativo(s)\n", neg);
 
    return 0;
}
