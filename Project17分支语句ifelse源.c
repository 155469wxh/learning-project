#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//c�����ǽṹ���ĳ����������
//��֧������ѡ����䡣ѡ�������switch��if
//��䣬��c �����У��ɷֺŸ����ľ���һ�����
int main()
{
	int age = 99;
	if (age < 18)
	{
		printf("����̸����\n");
		printf("δ����");
	}
	else if(age>=18&&age<26)
	{
		printf("����\n");
	}//���ĳ����֧��Ҫִ�ж�����䣬��ô����Ҫ�õ������ţ���Ϊif���ֻ�ܹ�һ�仰
	else if (age >= 26 && age < 40)
	{
		printf("׳��");
	}
	else if(age>=40&&age<60)
	{
		printf("����");
	}
	else if (age>=60)
	{
		printf("����");
	}
	//���֧���ʹ��else if������
	//ע�⣬else�������ifƥ�䣬������ֶ��if���ܿ��ܳ�������else
	return 0;
}
