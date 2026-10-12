#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>


func1();

int main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	func1();
	return 0;
}

int func1()
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	if (A % 3 == 0 && B % 3 == 0 && C % 3 == 0){
		printf("Реакция запустится\n");
	}
	else {
		printf("Реакция не запустится\n");
	}
	return 0;
}


