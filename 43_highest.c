#include <stdio.h>
 
int main() {
 
    int i, num = 0, highest = 0, position;
    
    for (i = 0; i < 100; i++) {
        scanf("%i", &num);
        if (num > highest) {
            highest = num;
            position = i + 1;
        }
    }
    
    printf("%i\n", highest);
    printf("%i\n", position);
    
    return 0;
}
