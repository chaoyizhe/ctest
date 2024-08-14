#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float weight = 0;
	float height = 0;
	printf("请输入您的体重(kg)和身高(m)\n");
		scanf("%f %f", &weight, &height);
		float BMI = weight / (height * height);
		printf("您的BMI是%f\n", BMI);
		printf("您的体型情况是");

		if (BMI < 18.5)
		{
			printf("体型偏瘦\n");
			printf("建议您:咨询专业人士后适当增加营养摄入，增强锻炼\n");
		}
		else if (BMI >= 18.5 && BMI < 23.9)
		{
			printf("正常\n");
			printf("继续保持\n");
		}
		else if (BMI >= 24 && BMI < 26.9)
		{
			printf("体型偏胖\n");
			printf("建议您:规律作息，安排适量运动，控制饮食\n");
		}
		else if (BMI >= 27 && BMI < 29.9)
		{
			printf("肥胖\n");
			printf("建议您：减少或不吃高热量食品，控制饮食，加强锻炼\n");
		}
		else
		{
			printf("重度肥胖\n");
			printf("建议您：严格控制饮食，戒除不良生活方式，必要时咨询医生\n");
		}

	return 0;
}