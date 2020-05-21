#include <stdio.h>
#include <stdlib.h> // 난수 생성을 위한 헤더파일
#include <time.h> // 항상 랜덤한 값을 위한 헤더파일
#define Dice_Max 1000 // 주사위 굴리는 횟수

int main(void)
{
	int arr[7] = { 0,0,0,0,0,0,0 };
	int dice;
	int count = 0;
	srand(time(NULL)); // 시작할 때 마다 다른 난수 발생

	for (int i = 0; i < Dice_Max; i++) { //주사위를 Dice_max만큼 굴리기
		dice = rand() % 6 + 1; // 주사위 결과를 dice에 대입
		switch (dice)
		{
		case 1: arr[1]++; break; //나온 숫자만큼 배열 숫자 ++
		case 2: arr[2]++; break;
		case 3: arr[3]++; break;
		case 4: arr[4]++; break;
		case 5: arr[5]++; break;
		case 6: arr[6]++; break;
		}
	}
	printf("============\n");
	printf("면      빈도\n");
	printf("============\n");
	for (int i = 0; i < 6; i++) {
		printf("%d      ", i + 1);
		printf("%d \n", arr[i + 1]);
	}
}