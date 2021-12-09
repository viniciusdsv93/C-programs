# include <stdio.h>

int main(void) {
	
	_Bool stringsIguais(char string1[], char string2[]);	
	
	char string1[20], string2[20];
	
	if (stringsIguais("casa", "casa")) {
		printf("Sao iguais.\n");
	}
	else {
		printf("Nao sao iguais.\n");
	}
	
	system("pause");
	return 0;	
}

_Bool stringsIguais(char string1[], char string2[]) {
	
	int i = 0;
	while (string1[i] == string2[i] && string1[i] != '\0' && string2[i] != '\0') {
		i++;
	}
	
	if (string1[i] == '\0' && string2[i] == '\0') {
		return 1;
	}
	else {
		return 0;
	}
}
