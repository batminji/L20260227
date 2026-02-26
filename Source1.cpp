// 이차원 배열 포인터

#include <stdio.h>
int main() 
{
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	printf("arr[0] : %p \n", arr[0]);
	printf("&arr[0][0] : %p \n", &arr[0][0]);

	printf("arr[1] : %p \n", arr[1]);
	printf("&arr[1][0] : %p \n", &arr[1][0]);

	// arr[0]과 &arr[0][0]는 자체적으로는 다르다.
	// 하지만 암묵적으로 & 연산자와 sizeof 연산자를 사용하는 경우를 제외하고
	// arr[0]은 arr[0][0]을 가리키는 포인터로 타입 변환된다.

	printf("전체 크기 : %d \n", sizeof(arr));
	printf("총 열의 개수 : %d \n", sizeof(arr[0]) / sizeof(arr[0][0]));
	printf("총 행의 개수 : %d \n", sizeof(arr) / sizeof(arr[0]));
	// 따라서 sizeof 연산자를 사용하면
	// arr[0]은 그 행 전체를 나타내는 데이터이기 때문에
	// arr[0][0] ~ arr[0][2] 의 크기를 나타낸다.

	// arr[0][0]의 형이 int이므로
	// arr[0]은 int* 형이 된다.
	// 그럼 arr은 int** 인가? -> 아니다

	return 0;
}