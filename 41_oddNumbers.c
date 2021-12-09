#include <stdio.h>
 
int main() {
 
    int X, Y, i, total = 0;
    
    scanf("%i", &X);
    scanf("%i", &Y);
    
    if (X < Y) {
        for (i = X + 1; i < Y; i++) {
            if (i % 2 != 0) {
                total += i;
            }
        }
        
    } else if (X > Y) {
        for (i = X -1; i > Y; i--) {
            if (i % 2 != 0) {
                total += i;
            }
        }
    } else if (X == Y) {
        total = 0;
    }
    
    printf("%i\n", total);
 
    return 0;
}
