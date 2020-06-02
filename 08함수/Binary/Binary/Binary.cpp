#include <stdio.h>

void Binary(int a)
{
	int arr[8];
	int i = 0;

	while (a > 0) {
		arr[i] = a % 2;
		a = a / 2;
		i++;
	}
	while (i > 0) {
		i--;
		printf("%d ", arr[i]);
	}
}

void Octal(int a)
{
	int arr[8];
	int i = 0;

	while (a>0) {
		arr[i] = a % 8;
		a = a / 8;
		i++;
	}
	while (i > 0) {
		i--;
		printf("%d ", arr[i]);
	}
}
void hexadecimal(int a)
{
	int arr[8];
	int i = 0;

	while (a > 0) {
		arr[i] = a % 16;
		a = a / 16;
		i++;
	}
	while (i > 0) {
		i--;
		printf("%d ", arr[i]);
	}
}

int main(void) 
{
	Binary(10);
	printf("\n");
	Octal(5);
	printf("\n");
	hexadecimal(20);
}