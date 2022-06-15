#define _CRT_SECURE_NO_WARNINGS 1
//define 一定要放第一行
//一劳永逸的办法是去改文件
//俺已经把这个文件放桌面了
#include <stdio.h>;


int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	//&a表示取集a
	sum = a + b;
	//这里的scanf和sum的顺序不能换
	//scanf表示输入函数
	printf("sum=0%d", sum);
	return 0;
}