#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	printf("����������");
	char password[20] = { 0 };
	scanf("%s", password);
	printf("��ȷ�������Ƿ���ȷ(Y/N)");
	//������Ҫ���һ�������������
	int i = 0;
	while ((i = getchar()) != '\n')//д���ϰ�����룬��������������������ţ���Ҫʹ�õ�����
	{
		;
	}
	int ch = 0;
	if (ch = getchar() == 'Y')//д���ϰ�����룬��������������������ţ���Ҫʹ�õ�����
	{
		printf("������ȷ");
	}
	else
	{
		printf("�������");
	}
	//Ϊ�ˣ�����Ҫ������˫���ŵ�����







	return 0;
}













