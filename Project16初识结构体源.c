#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//�ṹ��ʹ��c����������������������
struct stu
{
	char name[20];//����
	int age;
	double score;
};
struct book
{
	char name[20];
	double price;
	char id[30];
};
int main()
{
	struct stu w = { "ռɽ",20,85.8 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("1:%s %d %lf\n", w.name, w.age, w.score);
	//�õ���.������   �ṹ��.��Ա�����Ϳ����ҵ��ṹ��ĳ�Ա
	struct stu* pw = &w;
	//���ֽṹ��ָ��
	printf("2:%s %d %lf\n", (*pw).name, (*pw).age, (*pw).score);//���ַ�����ָ��Ľ�����
	printf("3:%s %d %lf\n", pw->name, pw->age, pw->score);//���ַ�����->ָ��

	return 0;
}