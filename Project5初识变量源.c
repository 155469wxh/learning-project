#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>;
#define MAX 10000;
enum Sex
{
	//ö�ٳ����ĳ�ʼ����ȡֵ�������޸ĳ�ʼ��ֵ
MEAL = 6,//�����6�����޸ĺ��ֵ
FEMEAL,
SECRET,
};
int main()
{
//1.���泣��	//	
//3.14
//10
//a
//abcde
//2.const���εĳ�����//
	//���������г����ԣ����ܸı�����ԣ�
	const int num = 10;//���Ǳ���
	//��ֵָ����const����//num = 20;//û��constʱ���ֵĽ����20��˵��num�Ǳ���
	//����������ע�ⳣ�����ı��ʻ��Ǳ��������������ӻ�������
	printf("%d\n", num);
	int n = MAX;
	//����������ֵ���ܸ�
	//int n = 10;
	//����int n�ᱨ�� Ӧ���볣�����ʽ
	//����const int nҲ�ᱨ��˵��const int ��Ȼ�Ǳ����������Ǳ���
	//�������Ǿ��г����Եı���
	//int arr[n];
//3.#deffine  ����ı�ʶ������
	printf("n=%d\n", n);
	//��һ�������n=,��Ȼ��ӡ�ľ��Ƕ�������ʽ
//4.ö�ٳ���
	printf("%d\n", MEAL);
	printf("%d\n", FEMEAL);
	printf("%d\n", SECRET);
	//
	return 0;
}