#define _CRT_SECURE_NO_WARNINGS 1

extern int g_val;
//全局变量的作用域是整个项目
//在不同文件里面使用变量时要先声明
//extern就是声明
#include <stdio.h>;
int b = 90;
//此处的b就是全局变量
//全局变量的生命周期是整个项目的生命周期
int main()
{
	int a = 100;
	//此处的a就是局部变量
	//局部变量的生命周是从进入作用域开始到出作用域结束的一个时间段
	printf("%d\n", g_val);
	printf("%d\n", a);
	printf("%d\n", b);


	return 0;
}