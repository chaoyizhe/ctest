#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int x,int y)
{
	return(x + y);
};

int main()
{
	int n1, n2, sum;
	n1 = 0;
	n2 = 0;
	printf("��������������\n");
	scanf("%d %d", &n1, &n2);
	printf("%d\n", Add(n1, n2));

	int arr[10] = { 10,11,12,13,14,15,16,17,18,19 };
	printf("%d\n", arr[5]);

	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i = i + 1;
	};

	return 0;
}   