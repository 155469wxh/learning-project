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
		printf("未成年");
	}
	else if(age>=18&&age<26)
	{
		printf("青年\n");
	}//如果某个分支下要执行多条语句，那么就需要用到大括号，因为if语句只能管一句话
	else if (age >= 26 && age < 40)
	{
		printf("壮年");
	}
	else if(age>=40&&age<60)
	{
		printf("中年");
	}
	else if (age>=60)
	{
		printf("老年");
	}
	//多分支语句使用else if来描述
	//注意，else与最近的if匹配，如果出现多个if，很可能出现悬空else
	return 0;
}
