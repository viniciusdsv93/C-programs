#include <stdio.h>
 
int main() {
 
    int I = 1, J;
    
    for (J = 60; J > -1; J = J - 5) {
        printf("I=%i J=%i\n", I, J);
        I += 3;
    }
    
	system("pause");
    return 0;
}
