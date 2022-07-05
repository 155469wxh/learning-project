#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;




//转义字符，改变了原来的的意思
//\?表示在书写连续问号时，防止被解析为三字母词
//\'表示字符常量'
//\\表示防止内容被解释为转义字符
//\a表示触发蜂鸣
int main()
{
	printf("c:c\\test\\test-9.c\n");//此处\t表示水平制表符，相当于键盘上的Tab
	printf("%s\n","abc");
	printf("%s\n","\"");
	printf("\?\?)\n");
	printf("\a\a\a\a");
	printf("\a\a\a\a");
	printf("%c\n",'\130');//结果是ASCII中的字符X，表示十进制的 
	//%s输出的是字符串用双引号，%c输出的是单个字符，用单引号
	//\ddd表示1~3八进制数
	//\xdd表示2个二进制数
	printf("%c\n", '\x30');//结果是ASCII中的字符０


	//注意，\t算作一个字符长度




	return 0;
}
