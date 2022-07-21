#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int day = 0;
	scanf("%d", &day);//刚才忘记了取地址
	switch (day)//这里括号只能接整形表达式
	{
	case 1://case后面接整型常量表达式
		printf("星期一\n");
		break;
	//case决定入口，break决定出口
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	}

	//发现一个奇怪的事情，我没有return0啊
	
	switch (day)
	{
		scanf("%d", &day);
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default://这一行代码防止有人输入不正确的值
		printf("输入错误");

	}
	//注意，刚才一道作业题题教会我，没有break，switch语句会一直运行下去
	return 0;
}