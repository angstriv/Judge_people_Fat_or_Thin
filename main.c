#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>



int main()
{
	char gender[16] = "";
	const char male[16] = "male";
	const char females[16] = "females";
	
	int height = 0;
	int input_weight = 0;//��������
	double standard_weight = 0;//��׼����
	double weight_difference = 0;//�������� �� ��׼���� �� ��
	
	
	//"����"
	printf("����һ�������ж������ݵĳ���\n");
	
	//�����Ա�
	while (1)
	{
		printf("�������Ա�(male/females):");
		gets(gender);
		if ((strcmp(gender, male) == 0) || (strcmp(gender, females) == 0))//�Ա��Ƿ�Υ��
		{
			break;
		}
		else
		{
			printf("�Ա�����\n");
		}
	}
	//�������
	while (1)
	{
		printf("���������(����,����):");
		scanf("%d", &height);
		if (height > 0)
		{
			break;
		}
		else
		{
			printf("��߱������0\n");
		}
	}
	//��������
	while (1)
	{
		printf("����������(����,����):");
		scanf("%d", &input_weight);
		if (input_weight > 0)
		{
			break;
		}
		else
		{
			printf("���ر������0\n");
		}
	}
	


	//"����"
	if (strcmp(gender, male) == 0)//�Ա�Ϊ��
	{
		standard_weight = (height - 80) * 0.7;//��ȡ��׼����
		weight_difference = (input_weight - standard_weight) / standard_weight;//��ȡ���ز�ֵ

	}
	else if (strcmp(gender, females) == 0)//�Ա�ΪŮ
	{
		standard_weight = (height - 70) * 0.6;//��ȡ��׼����
		weight_difference = (input_weight - standard_weight) / standard_weight;//��ȡ���ز�ֵ

	}


	//"���"
	if (weight_difference > 0.2)//����
	{
		printf("�����ܺ���\n");
	}
	else if (weight_difference > 0.1)//ƫ��
	{
		printf("������ƫ��\n");
	}
	else if (weight_difference <= 0.1 && weight_difference >= -0.1)//����
	{
		printf("�����ܺ���\n");
	}
	else if (weight_difference < -0.1)//ƫ��
	{
		printf("������ƫ��\n");
	}
	else if (weight_difference < -0.2)//����
	{
		printf("�����ܺ���\n");
	}
	


	return 0;
}

