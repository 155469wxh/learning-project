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







	return 0;
}













