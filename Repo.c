#include<stdio.h>

//suma fecha cumple

int main() {
	int dia, mes, año;

	printf("Escribe tu día de nacimiento (2 numeros)");
	scanf_s("%d", &dia);

	printf("Escribe tu mes de nacimiento (2 numeros)");
	scanf_s("%d", &mes);

	printf("Escribe tu año de nacimiento (4 numeros)");
	scanf_s("%d", &año);

	printf("La suma de tu fecha de nacimiento es:");
	printf("%d + %d = %d", dia, mes, año);
}
