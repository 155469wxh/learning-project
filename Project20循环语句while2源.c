#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	printf("请输入密码");
	char password[20] = { 0 };
	scanf("%s", password);
	printf("请确认密码是否正确(Y/N)");
	//这里需要添加一个缓存清除代码
	int i = 0;
	while ((i = getchar()) != '\n')//写了老半天代码，最后发现问题出在这里的引号，需要使用单引号
	{
		;
	}
	int ch = 0;
	if (ch = getchar() == 'Y')//写了老半天代码，最后发现问题出在这里的引号，需要使用单引号
	{
		printf("密码正确");
	}
	else
	{
		printf("密码错误");
	}
	//为此，我需要查明单双引号的区别
	//单引号引起的往往是一个整数，而双引号代表的是一个指向无名数组的指针
	int q = 0;
	while ((i = getchar()) != EOF)
	{
		if (i < '0' || i>'9')
		{
			continue;
		}
		putchar(i);
	}
	//这一段代码的作用是，只打印数字字符



	int f = 0;//变量的初始化
	while (f <= 100)//判断部分
	{
		printf("%d\n", f);
		f++;//变量的调整部分
	}
	//为了解决初始化部分，判断部分，调整部分离得太远，于是就产生了for循环语句，且听下回分解






	return 0;
}













