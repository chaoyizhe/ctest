#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input = 0;
	printf("���Ƿ�ͬ��Э��[��1 or 0 ");
	printf("(1 is yes and 0 is no)]\n");
	scanf("%d", &input);
	if (input == 1)
	{
		printf("��һ��\n");
	}
	else
	{
		printf("�����Ի��˳�\n");
	}

	int line = 0;
	printf("ѧϰC����");


	while(line < 20000)
	{
		printf("д����%d\n", line);
		line++;
		if (line > 2000)
		{
			break;
		}


	}
	if (line > 20000)
	{
		printf("��ϲ������һ�׶�");
	}
	else
	{
		printf("��������");
	}
	return 0;
}