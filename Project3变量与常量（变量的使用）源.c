#define _CRT_SECURE_NO_WARNINGS 1
//define һ��Ҫ�ŵ�һ��
//һ�����ݵİ취��ȥ���ļ�
//���Ѿ�������ļ���������
#include <stdio.h>;


int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	//&a��ʾȡ��a
	sum = a + b;
	//�����scanf��sum��˳���ܻ�
	//scanf��ʾ���뺯��
	printf("sum=0%d", sum);
	return 0;
}