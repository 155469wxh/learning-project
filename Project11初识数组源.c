#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//���飬����һ�����ļ���
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int ch[5] = { 'a','b','c' };//�����������ֻ������Ԫ�أ���֮Ϊ����ȫ��ʼ��
	int i = 0;
	//����ĵ���ʹ�õķ�ʽ���±�
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}


	return 0;
}