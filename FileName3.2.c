#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "");
	int A, B;
	
	puts("������� �������� �������� A � B");
	scanf("%d %d", &A, &B);
	if ((A % 2) != (B % 2)) {
		printf("������ �������: ��������\n");
	}
	else {
		printf("������ �������: ���������\n");
	}

	return 0;
}