#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "");
	int A, B;
	
	puts("Введите значение датчиков A и B");
	scanf("%d %d", &A, &B);
	if ((A % 2) != (B % 2)) {
		printf("Сирена тревоги: включена\n");
	}
	else {
		printf("Сирена тревоги: выключена\n");
	}

	return 0;
}