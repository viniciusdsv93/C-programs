#include <stdio.h>
#include <stdbool.h>
 
int main(void) {
 
	    int X, Y;
	    
	    while (true) {
	    scanf("%i %i", &X, &Y);
	        
	    if (X > Y) {
	        printf("Decrescente\n");
	    	}
	    else if (X < Y) {
	        printf("Crescente\n");
	    	}
	    else if (X == Y) {
	            break;
	    	}
		}
	
	return 0;
}
