#include <stdio.h>
 
int main() {
 
    int I, J, k;
    
    for (I = 1; I < 10; I += 2) {
        for (J = 7; J > 4; J--) {
            printf("I=%i J=%i\n", I, J);
        }
    }
 
    return 0;
}
