#include <stdio.h>

int main() {
	float num1, num2, resultado;
	int opcao;

	printf("Digite o primeiro nC:mero: ");
	scanf("%f", &num1);

	printf("Digite o segundo nC:mero: ");
	scanf("%f", &num2);

	printf("\nEscolha uma opC'C#o:\n");
	printf("1 - AdiC'C#o\n");
	printf("2 - SubtraC'C#o\n");
	printf("3 - MultiplicaC'C#o\n");
	printf("4 - DivisC#o\n");
	printf("OpC'C#o: ");
	scanf("%d", &opcao);

	switch(opcao) {
	case 1:
		resultado = num1 + num2;
		printf("\nResultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
		break;

	case 2:
		resultado = num1 - num2;
		printf("\nResultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
		break;

	case 3:
		resultado = num1 * num2;
		printf("\nResultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
		break;

	case 4:
		if(num2 != 0) {
			resultado = num1 / num2;
			printf("\nResultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
		} else {
			printf("\nERRO: DivisC#o por zero!\n");
		}
		break;

	default:
		printf("\nOpC'C#o invC!lida!\n");
		break;
	}

	return 0;
}
