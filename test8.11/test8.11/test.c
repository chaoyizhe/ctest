#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//初识操作符（部分）

int main()
{
	int f = 0;
	printf("%d\n", f = 9 / 2);
	int q = 0;
	printf("%d\n", q = 3 * 2);
	int e = 0;
	printf("%d\n\n", e = 7 % 2);

	int flag = 0;
	if (!flag)
	{
		printf("失败\n\n");
	}


	int arr[] = { 1,2,3 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n\n", sizeof(arr) / sizeof(arr[1]));

	int a = 10;
	int b = a++; //先使用后++,前置后置过程顺序不同
	printf("%d\n", b);
	printf("%d\n", a);
	int c = --a;
	printf("%d\n\n", c);

	int a1 = (int)3.14;
	printf("%d\n\n", a1);

	int a2 = 3;
	int b1 = 5;
	int b2 = 0;
	if (a2 && b1)
	{
		printf("运行\n");
	}
	if (a2 || b2)
	{
		printf("继续\n\n");
	}

	int c1 = 5;
	int c2 = 8;
	int c3 = c1 > c2 ? c1 : c2;
	printf("%d\n\n", c3);

	int d1 = 1;
	int d2 = 2;
	int d3 = 0;
	int d4 = (d1=d1+2,d2=d1+2,d3=d2+2);
	printf("%d\n\n", d4);



	return 0;
}