#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int day = 0;
	scanf("%d", &day);//�ղ�������ȡ��ַ
	switch (day)//��������ֻ�ܽ����α��ʽ
	{
	case 1://case��������ͳ������ʽ
		printf("����һ\n");
		break;
	//case������ڣ�break��������
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	}

	//����һ����ֵ����飬��û��return0��
	
	switch (day)
	{
		scanf("%d", &day);
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default://��һ�д����ֹ�������벻��ȷ��ֵ
		printf("�������");

	}
	//ע�⣬�ղ�һ����ҵ����̻��ң�û��break��switch����һֱ������ȥ
	return 0;
}