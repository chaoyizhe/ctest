#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
extern double a; 
int main()
{
	{
		printf("a=%.2f\n", a);
	}
	printf("a=%.2f\n", a);
	printf("\\\n");
	printf("\"Paris Olympique\"\n");
	printf("\"");
	printf("CHINA");
	printf("\"\n");
	return 0;
} 