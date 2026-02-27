// 배열의 포인터

#include <stdio.h>

int main() 
{
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	// 배열의 자료형 (*포인터 이름) [배열의 열 개수]
	int(*parr)[3];

	parr = arr;

	printf("parr[1][2] : %d , arr[1][2] : %d \n", parr[1][2], arr[1][2]);

	return 0;
}