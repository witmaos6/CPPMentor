#include <stdio.h>

void prime() // 함수 생성
{
	int count = 0;

	for (int i = 2; i <= 100; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				count++; 
			}
		}
		if (count == 2) { // 1과 자기자신이 나누어지면 출력
			printf("%d ", i);
		}
		count = 0; //초기화
	}

}

int main(void)
{
	prime();
	return 0;
}