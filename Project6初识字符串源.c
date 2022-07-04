#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
#include <string.h>;

//字符串就是用引号引出的一串字符
//单引号是字符，双引号是字符串


int main()
{
	char arr1[] = "hello";
	char arr2[] = "abc";
	char arr3[] = { 'a','b','c' };
	char arr4[] = { 'a','b','c','\0' };
	char arr5[] = { '\0' };
//字符数组是一组同类型的元素
//出现一个小问题，无法找到监视窗口
	//解决方法，直接先按F10进入调试，才会出现监视窗口
	//-		arr	0x00000045ba7dfc64 "hello"	char[6]
//出现了一个小问题，按了F10之后报错没有内存什么的
	//解决方案是，按住return0之前的小暂停键
	//字符串的结束标志是\0
	printf("%s\n", arr1);//打印结果hello
		printf("%s\n", arr2);//打印结果abc
		printf("%s\n", arr3);//打印结果乱码
		//乱码原因，没有可识别的结束字符\0
		//解决办法手动添加\0即可
		printf("%s\n", arr4);//打印结果abc
		//问题成功解决，启发是，字符串中\0是结束标志，没有结束标志就会乱码
		printf("%s\n", arr5);


		//求一下字符串的长度
		int len = strlen("abc");
		//新见到的函数strlen是string length的缩写
		//注意函数运行时要写个括号
		printf("%d\n", len);//3
		printf("%lld\n", strlen(arr1));//5
		printf("%lld\n", strlen(arr2));//3
		printf("%lld\n", strlen(arr3));//随机值(35)因为没有终止符
		printf("%lld\n", strlen(arr4));//3
		printf("%lld\n", strlen(arr5));//0
		//刚才出现报错printf("%lld\n", strlen(arr1));//5运行时出现C6328错误原因是strlen的返回类型是一个64位的无符号整型，所以要用长长整型
	return 0;
}