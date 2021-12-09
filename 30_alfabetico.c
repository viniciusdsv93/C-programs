# include <stdio.h>

int main(void) {
	
	void alfabetico(char variavel);
	char string[20];
	
	printf("Digite uma palavra:\n");
	scanf("%s", &string);
	
	int i = 0;
	while (string[i] != '\0') {
		alfabetico(string[i]);
		i++;
	}
	
	system("pause");
	return 0;
}

void alfabetico (char variavel) {
	
	if ((variavel >= 'a' && variavel <= 'z') ||
		(variavel >= 'A' && variavel <= 'Z')) {
		printf("Eh uma letra.\n");
	}
	else {
		printf("Nao eh uma letra.\n");
	}
		
}
