# include <stdio.h>

int main() {
	
	float I, J, k;
	
	for (I = 0; I < 2.1; I += 0.2) {
		for (k = 1; k <= 3; k++) {
			J = k + I;
			if (I == 0.0 || I == 1.0 || I == 2.0) {
				printf("I=%.0f J=%.0f\n", I, J);
			}
			else {
				printf("I=%.1f J=%.1f\n", I, J);	
			}
		}
	}
	
	system("pause");
	return 0;
}
