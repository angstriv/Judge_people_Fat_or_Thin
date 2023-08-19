#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>



int main()
{
	char gender[16] = "";
	const char male[16] = "male";
	const char females[16] = "females";
	
	int height = 0;
	int input_weight = 0;//输入体重
	double standard_weight = 0;//标准体重
	double weight_difference = 0;//输入体重 和 标准体重 的 差
	
	
	//"输入"
	printf("这是一个可以判断你胖瘦的程序\n");
	
	//输入性别
	while (1)
	{
		printf("请输入性别(male/females):");
		gets(gender);
		if ((strcmp(gender, male) == 0) || (strcmp(gender, females) == 0))//性别是否违规
		{
			break;
		}
		else
		{
			printf("性别有误\n");
		}
	}
	//输入身高
	while (1)
	{
		printf("请输入身高(厘米,整数):");
		scanf("%d", &height);
		if (height > 0)
		{
			break;
		}
		else
		{
			printf("身高必须大于0\n");
		}
	}
	//输入体重
	while (1)
	{
		printf("请输入体重(公斤,整数):");
		scanf("%d", &input_weight);
		if (input_weight > 0)
		{
			break;
		}
		else
		{
			printf("体重必须大于0\n");
		}
	}
	


	//"计算"
	if (strcmp(gender, male) == 0)//性别为男
	{
		standard_weight = (height - 80) * 0.7;//获取标准体重
		weight_difference = (input_weight - standard_weight) / standard_weight;//获取体重差值

	}
	else if (strcmp(gender, females) == 0)//性别为女
	{
		standard_weight = (height - 70) * 0.6;//获取标准体重
		weight_difference = (input_weight - standard_weight) / standard_weight;//获取体重差值

	}


	//"输出"
	if (weight_difference > 0.2)//很胖
	{
		printf("您可能很胖\n");
	}
	else if (weight_difference > 0.1)//偏胖
	{
		printf("您可能偏胖\n");
	}
	else if (weight_difference <= 0.1 && weight_difference >= -0.1)//合适
	{
		printf("您可能合适\n");
	}
	else if (weight_difference < -0.1)//偏瘦
	{
		printf("您可能偏瘦\n");
	}
	else if (weight_difference < -0.2)//很瘦
	{
		printf("您可能很瘦\n");
	}
	


	return 0;
}

