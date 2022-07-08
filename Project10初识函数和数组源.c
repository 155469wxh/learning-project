#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//warning C4828: 文件包含在偏移 0x131 处开始的字符，该字符在当前源字符集中无效(代码页 936
//原因，字符集编码问题
//warning C4067: 预处理器指令后有意外标记 - 应输入换行符，指的是前面的三行里面，#include不能加分号
int Add(int x, int y,int a)
{
	int z = 0;
	z = x + y +a;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	scanf("%d%d%d", &num1, &num2, &num3);
	//scanf是一个重要的函数，是对变量进行赋值，那么刚才出现的问题就很容易解释了
	//注意scanf要放在Add函数的前面
	int sum = Add(num1,num2,num3);
	//一直少了第18行，所以一直没有结果
	printf("%d\n",sum);
	







	return 0;
}
//代码运行结果是单独的一个0，没有让我加法的余地
//前面所有的报错都解决后，还是不行，所以应该是代码写的有问题,对的，问题在scanf函数
