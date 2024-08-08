#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define Max 10
#define MAX "abandon"

enum color
{
	red = 1,
    green,
	blue
};

enum  sex
{
	male,
	female,
	others
};

int main()
{ 
	printf("part one\n");
	printf("%d\n", Max);
	int a = Max;
	printf("%d\n", a);
	printf("%s\n\n", MAX);

	printf("part two\n");
	int num1 = 0;
	int num2 = 0;
	printf("ÇëÊäÈëÕûÊı\n");
	scanf("%d %d", &num1,&num2);
	int num = num1+ num2;
	printf("num=%d\n\n", num);

	printf("part three\n");
	enum color c = red;
	enum sex v = male;
	printf("The value of c is %d\n", c);
	return 0;
} 