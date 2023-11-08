#include <stdio.h>

//Funcao para ordernar um valor em ordem crescente 

void ordenarVetor( int vetor [], int tamanho) {
	int temp;
	for (int i =0; i < tamanho - 1; j < tamanho; j++) {
		for (int j = i + 1; j < tamanho; j++) {
			if (vetor[i] > vetor [j]) {
				temp = vetor[i];
				vetor[i] = vetor [j];
				vetor[j] = temp;
			}
		}
	}
}
int main() {
	int tamanho = 7;
	int vetor[tamanho];

	//Solicitar qu eo usuário insira os valores
	printf("Digite 7 valores inteiros:\n");
	for (int i = 0; i < tamanho; i++) {
		scanf("%d", &vetor[i]);
	}

	//Chame a funcao para ordernar o vetor
	ordernarVetor(vetor, tamanho);

	//Apresente o resultado ordenado
        printf("Valores organizados em ordem crescente:\n");
	for (int i = 0; i < tamanho; i++) {
		printf("%d", vetor [i]);
	}
	
	return 0;
}

