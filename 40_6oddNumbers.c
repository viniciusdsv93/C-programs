#include <stdio.h>
 
int main() {
 
    int num, i, total = 0;
    
    scanf("%i", &num);
    
    for (i = num; i < num + 12; i++) {
        if (i % 2 != 0) {
            printf("%i\n", i);
            total++;
            if (total == 6) {
                break;
            }
        }
    }
 
    return 0;
}
