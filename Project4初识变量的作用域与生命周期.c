#define _CRT_SECURE_NO_WARNINGS 1

extern int g_val;
//ȫ�ֱ�������������������Ŀ
//�ڲ�ͬ�ļ�����ʹ�ñ���ʱҪ������
//extern��������
#include <stdio.h>;
int b = 90;
//�˴���b����ȫ�ֱ���
//ȫ�ֱ���������������������Ŀ����������
int main()
{
	int a = 100;
	//�˴���a���Ǿֲ�����
	//�ֲ��������������Ǵӽ���������ʼ���������������һ��ʱ���
	printf("%d\n", g_val);
	printf("%d\n", a);
	printf("%d\n", b);


	return 0;
}