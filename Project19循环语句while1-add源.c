#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int ch = getchar();
	//从stdin(标注键盘)中输入一个字符，交给getchar来处理，如果读到正常字符，就返回对应的ASCII码值
	//如果读到错误字符，就返回EOF（end of file ）文件结束
	printf("%c\n", ch);
	putchar(ch);//这一行代码完全可以取代printf
	//7.25今天学英语去了，没有写代码，先上传一下，至少不能落下








	return 0;
}
















