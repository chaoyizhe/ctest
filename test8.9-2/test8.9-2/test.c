#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//ת���ַ���ע��
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
	//C���Է��ע��//��֧��Ƕ��ע��

	//printf("abcd");
	//C++���
	
	return 0;
}