#include <iostream>

const int tam = 10; // Constante?

int maior(int vet[], int tam);
int menor(int vet[], int tam);
bool crescente(int vet[], int tam);

int main()
{
	int vet[tam] = { 0 };
	for (int i = 0; i < tam; i++) {
		std::cin >> vet[i];
	}
	std::cout << "\nMaior: " << maior(vet, tam) << "\n";
	std::cout << "Menor: " << menor(vet, tam) << "\n";
	if (crescente(vet, tam)) {
		std::cout << "Crescente.\n";
	}
	else {
		std::cout << "Nao crescente.\n";
	}
}

///////////////////////////////////////////////////////////////////////////////////////

int maior(int vet[], int tam) {
	int max_num = vet[0];
	for (int i = 1; i < tam; i++) {
		if (vet[i] > max_num) {
			max_num = vet[i];
		}
	}
	return max_num;
}

int menor(int vet[], int tam) {
	int min_num = vet[0];
	for (int i = 1; i < tam; i++) {
		if (vet[i] < min_num) {
			min_num = vet[i];
		}
	}
	return min_num;
}

bool crescente(int vet[], int tam) {
	for (int i = 1; i < tam; i++) {
		if (vet[i] <= vet[i - 1]) {
			return false;
		}
	}
	return true;
}