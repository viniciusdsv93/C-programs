#include <stdio.h>
 
int main() {
 
    float num;
    int total = 0;
   
	int i;
	for (i = 0; i < 6; i++) {
		scanf("%f", &num);
	    if (num > 0) {
	           total++;
	    }
	}
   
	printf("%i valores positivos\n", total);
 
	return 0;
}
