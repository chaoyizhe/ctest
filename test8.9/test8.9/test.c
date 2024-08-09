#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[20] = "abcde";
	char arr2[20] = { 'a','b','c','d','e' ,'\0'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);

	int len = strlen("abc");
	printf("%d\n", len);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}