#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float weight = 0;
	float height = 0;
	printf("��������������(kg)�����(m)\n");
		scanf("%f %f", &weight, &height);
		float BMI = weight / (height * height);
		printf("����BMI��%f\n", BMI);
		printf("�������������");

		if (BMI < 18.5)
		{
			printf("����ƫ��\n");
			printf("������:��ѯרҵ��ʿ���ʵ�����Ӫ�����룬��ǿ����\n");
		}
		else if (BMI >= 18.5 && BMI < 23.9)
		{
			printf("����\n");
			printf("��������\n");
		}
		else if (BMI >= 24 && BMI < 26.9)
		{
			printf("����ƫ��\n");
			printf("������:������Ϣ�����������˶���������ʳ\n");
		}
		else if (BMI >= 27 && BMI < 29.9)
		{
			printf("����\n");
			printf("�����������ٻ򲻳Ը�����ʳƷ��������ʳ����ǿ����\n");
		}
		else
		{
			printf("�ضȷ���\n");
			printf("���������ϸ������ʳ������������ʽ����Ҫʱ��ѯҽ��\n");
		}

	return 0;
}