#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
#include <string.h>;

int main()
{
	int input = 0;
	printf("hello?(1/0)>");
		scanf("%d", &input);
		//�﷨����������&&&&&&&&&&&&&&&&&&input
		if (input == 0)
		{
			printf("hello");
		}
		else
			//else���治�ܼӷֺŰ�����������������
	{
		printf("shit");
	}
		return 0;
}