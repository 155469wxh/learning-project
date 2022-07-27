#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	//最简单的for循环语句
	int i = 0;
	for (i = 1; i <= 100000; i++)
	//for（初始化；判断；调整）
	//调整部分可以放在循环体内部，注意语法规则即可
    //一般不在循环体内部对变量进行赋值，尽量不在循环体内对变量进行赋值，防止循环失去控制
	//判断部分建议左闭右开
	//判断部分的省略，导致判断部分恒为真，循环成为死循环
	{
		if (i == 5)
		{
			continue;
		}
		//break和continue在for语句中的使用
		//break会直接跳出循环
		//continue会跳过continue后面的代码，直接执行下一次判断。由于for循环的调整部分位于括号内，所以不会进入死循环
		printf("%d\n", i);
	}
	//为了证明，不要随便省去表达式的观点，这里写一串代码
	int a = 0;
	int b = 0;
	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 3; b++)
		{
			printf("你好\n");
		}
		//如果这部分代码省去了b=0那么，就只有三次你好被打印




	}














	return 0;
}















