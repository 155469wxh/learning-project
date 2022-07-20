#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//结构体使得c语言有能力描述复杂类型
struct stu
{
	char name[20];//姓名
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
	struct stu w = { "占山",20,85.8 };//结构体的创建和初始化
	printf("1:%s %d %lf\n", w.name, w.age, w.score);
	//用到了.操作符   结构体.成员变量就可以找到结构体的成员
	struct stu* pw = &w;
	//两种结构体指针
	printf("2:%s %d %lf\n", (*pw).name, (*pw).age, (*pw).score);//这种方法是指针的解引用
	printf("3:%s %d %lf\n", pw->name, pw->age, pw->score);//这种方法是->指向

	return 0;
}