#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//c语言是结构化的程序设计语言
//分支语句就是选择语句。选择语句有switch和if
//语句，再c 语言中，由分号隔开的就是一条语句
int main()
{
	int age = 99;
	if (age < 18)
	{
		printf("不能谈恋爱\n");
		printf("未成年\n");
	}
	else if(age>=18&&age<26)
	{
		printf("青年\n");
	}//如果某个分支下要执行多条语句，那么就需要用到大括号，因为if语句只能管一句话
	else if (age >= 26 && age < 40)
	{
		printf("壮年\n");
	}
	else if(age>=40&&age<60)
	{
		printf("中年\n");
	}
	else if (age>=60)
	{
		printf("老年\n");
	}
	//多分支语句使用else if来描述
	//注意，else与最近的if匹配，如果出现多个if，很可能出现悬空else
	//当两个整形变量进行比较时，建议把常量放在左边
	//另一端代码，判断是不是奇数
	int a = 19;
	if (0==a%2)//注意等号和连等号的含义不同，这里刚刚报错，表达式必须是可修改的左值
	{
		printf("偶数\n");
	}
	else
	{
		printf("奇数\n");
	}
	/*int i = 0;
	if (i <= 1000)
	{
		if (i % 2 == 1)
		{
			printf("%d\n", i);
			i++;
		}
		else(i % 2 == 0)
		{
			i++;
		}
	}*/  //这是一段失败的代码
	//如何打印1~100之间的所有奇数
	int i = 0;
	for (i=1;i<=100;i++)
	{
		if (i % 2 == 1)
		{
			printf("%d\n", i);
		}
	}
	//写了个for循环，没学过的
	//另外一种写法
	int t = 0;
	for (t = 1; t <= 100; t += 2)
	{
		printf("%d\n", t);
	}
	//由此可见，一种代码可以有多种写法






	return 0;
}
