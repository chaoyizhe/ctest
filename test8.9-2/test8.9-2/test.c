#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//转义字符与注释
	printf("%s", "\\\\\n\\\n");
	printf("\"\n");
	printf("%c\n", 'w');
	printf("52\n");
	printf("abc\n\0ef");
	printf("abc\\0ef\n");
	printf("a\tc\n");
	printf("\a\a\a\a\a\a");
	printf("ab\n");
	printf("abcdef\r\n");
	//printf("abcdef\r");
	printf("\n%c\n", '\130');
	printf("%c\n", '\x63');
	printf("abc\r");
	printf("abcd");
	/*printf("abc\r");
	printf("abcd");*/
	//C语言风格注释//不支持嵌套注释

	//printf("abcd");
	//C++风格
	
	return 0;
}