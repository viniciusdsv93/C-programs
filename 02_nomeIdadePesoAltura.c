# include <stdio.h>
main()
{
	char nome[30];
	int idade;
	float altura, peso;
	printf("Digite o nome: ");
	scanf("%s", nome);
	printf("Digite a idade: ");
	scanf("%d", &idade);
	printf("Digite a altura: ");
	scanf("%f", &altura);
	printf("Digite o peso: ");
	scanf("%f", &peso);
	printf("\nNome: %s", nome);
	printf("\nIdade: %d", idade);
	printf("\nAltura: %.2f", altura);
	printf("\nPeso: %.2f", peso);
	return(0);	
}
