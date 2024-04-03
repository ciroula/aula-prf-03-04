#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int numero, quantNumeros = 0, quantPositivo = 0;
	int quantNegativo = 0, pares = 0, impares= 0;
	
	do {
		printf("Digite um numero: ");
		scanf("%i",&numero);
		
		if (numero != 0){
			quantNumeros++;
		
		}
		
		if (numero > 0){
			quantPositivo++;
			
			if (numero % 2 == 0) {
				pares++;
			} else {
				impares++;
			}
		} else {
			quantNegativo++;
		}
	} while (numero !=0);
	
	printf("\n=== Exibino resultado ===\n");
	printf("Quantidade demumeros pares: i% \n", pares);
	printf("Quantidade de numeros impares: %i \n", impares);
	printf("Quantidade de numeros positivos: %i \n", quantPositivo);
	printf("Quantidade de numeros negativos: %i \n", quantNegativo);
	printf("Quantidade de numeros inseridos: %i \n", quantNumeros);
	
	return 0;
}

