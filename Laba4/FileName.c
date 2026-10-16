#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>


ZD_1();
ZD_1_A();
ZD_1_B();
ZD_1_V();
ZD_2();
ZD_3();
int filos(int R_A, int R_B, int R_C);

int main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	ZD_1();
	ZD_1_A();
	ZD_1_B();
	ZD_1_V();
	ZD_2();
	ZD_3();

	printf("Введите три числа:\n");
	int A, B, C;
	int res;
	scanf("%d %d %d", &A, &B, &C);
	res = filos(A, B, C);
	if (res == 1) { 
		printf("Реакция запустится\n"); 
	}
	else { 
		printf("Реакция не запустится\n"); 
	}
	printf("fil = %d\n", res);
	return 0;
}

int filos(int R_A, int R_B, int R_C)
{
	int square = 0;
	if (R_A % 3 == 0 && R_B % 3 == 0 && R_C % 3 == 0) {
		return 1;
	}
	else {
		return 0;
	}
	return square;
}

int ZD_1()
{
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("Вывело: c = %c, i = %d, f = %f, d = %lf\n", c, i, f, d);
	scanf("Ввести: c = %c, i = %d, f = %f, d = %lf", &c, &i, &f, &d);
	return 0;
}

int ZD_1_A()
{
	double n;
	printf("Введите вещественное число: ");
	scanf("%lf", &n);
	int it = (int)n;
	double dr = n - it;
	printf("Целая часть: %d\n", it);
	printf("Дробная часть: %f\n", dr);
	return 0;
}

int ZD_1_B()
{
	char ch;
	printf("Введите символ: ");
	scanf(" %c", &ch);
	printf("Десятичный код: %d\n", ch);
	printf("Шестнадцатиричный код: %x\n", ch);
	return 0;
}

int ZD_1_V()
{
	int i;
	printf("Введите i: ");
	scanf("%d", &i);
	if (i == 0) {
		printf("Ошибка. Деление на 0\n");
	}
	else {
		double rez = (double)1 / i;
		printf("Результат 1/%d в десятичном виде: %f\n", i, rez);
	}
	return 0;
}

int ZD_2()
{
	int a = 11;
	int b = 3;
	int x;
	float y;
	double z;

	x = a / b;
	y = a / b;
	z = a / b;
	
	printf("x (int)    = %d\n", x);
	printf("y (float)  = %f\n", y);
	printf("z (double) = %lf\n\n", z);

	printf("(float)a / b    = %f\n", (float)a / b);
	printf("(double)a / b   = %lf\n", (double)a / b);

	printf("(float)(a / b)  = %f\n", (float)(a / b));
	printf("(double)(a / b) = %lf\n", (double)(a / b));

	return 0;
}

int ZD_3()
{
	int n;
	int fir, midl, last, sum, revers;

	printf("Ваше число: ");
	if (scanf("%d", &n) != 1) {
		printf("Ошибка ввода.\n");
		return 1;
	}

	last = n % 10;          
	midl = (n / 10) % 10; 
	fir = n / 100;        

	sum = fir + midl + last; 
	revers = last * 100 + midl * 10 + fir;
	printf("Последняя цифра: %d, первая: %d, сумма цифр: %d, наоборот: %d\n",
		last, fir, sum, revers);

	return 0;
}
