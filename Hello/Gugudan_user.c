#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j;
	printf("몇단의 구구단을 출력할까요? :\n");
	scanf("%d", &i);

	
	{
		for (j = 1; j < 10; j++)
		{
			printf("%d x %d = %d \n", i, j, i * j);
		}

	}
	return 0;
}