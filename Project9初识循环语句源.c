#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
#include <string.h>;
//初识循环语句
int main()
{
	int line = 0;
	while (line < 30000)
		//while后面不能加分号，应当在大括号内加分号
	{
		printf("写代码%d\n", line);
		line++;
		//这里加号必须用两个，因为语法规则
		//这一步是让代码走下去的关键之一
	}
	if (line = 30000)
		//这里的等号可以用一个
	{
		printf("%s\n", "good offer");
	}


	return 0;
}