#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	//int ch = 0;
	////从stdin(标注键盘)中输入一个字符，交给getchar来处理，如果读到正常字符，就返回对应的ASCII码值
	////如果读到错误字符，就返回EOF（end of file ）文件结束
	///*printf("%c\n", ch);
	//putchar(ch);*///这一行代码完全可以取代printf
	////7.25今天学英语去了，没有写代码，先上传一下，至少不能落下
	//while ((ch = getchar()) != EOF)//注意这里的语法规则哈，！=前面的内容是一个句式，所以要带括号
	//{
	//	putchar(ch);
	//}
	////要想出离程序，就需要Ctrl+Z
	char password[20] = {0};
	printf("请输入密码");
	scanf("%s", password);//输入123456加回车（\n）
	/*getchar();*/
	//如果不加这一句的话，到时候下一个getchar在从缓冲区里面提取字符时，就会直接提取到一个\n导致程序直接进行到else
	//但是这种方法有一定的缺点，如果你输入密码时有空格，就还是会直接显示错误
	printf("请确认密码(Y/N)");
	int clean = 0;
	while((clean=getchar())!="\n")
	{
		;//这是一条空语句，可以把所有内容清理干净
	}//清理缓冲区
	int i = getchar();
	if (i == 'Y')
	{
		printf("密码正确");
	}
	else//(i==N)是一句错误的话，所以刚才报错了，这里的else不应该设置任何限制
	{
		printf("密码错误");
	}
	return 0;
}
















