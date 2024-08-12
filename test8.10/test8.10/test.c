#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input = 0;
	printf("你是否同意协定[填1 or 0 ");
	printf("(1 is yes and 0 is no)]\n");
	scanf("%d", &input);
	if (input == 1)
	{
		printf("下一步\n");
	}
	else
	{
		printf("请重试或退出\n");
	}

	int line = 0;
	printf("学习C语言");


	while(line < 20000)
	{
		printf("写代码%d\n", line);
		line++;
		if (line > 2000)
		{
			break;
		}


	}
	if (line > 20000)
	{
		printf("恭喜进入下一阶段");
	}
	else
	{
		printf("继续加油");
	}
	return 0;
}