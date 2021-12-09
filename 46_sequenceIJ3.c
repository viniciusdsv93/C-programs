#include <stdio.h>
 
int main() {
 
    int I, J, k = 7;
    
    for (I = 1; I < 10; I += 2) {
        for (J = k; J > k - 3; J--) {
            printf("I=%i J=%i\n", I, J);
        }
        k += 2;
    }
 
    return 0;
}
