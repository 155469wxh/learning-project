#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
//此代码的目标，由两边向中间缩进，打印字符串
int main()
{
	//char arr1[] = "whelecom to bit!!!!!!";
	//char arr2[] = "#####################";
	////获得知识点，char关键字永用于指示字母和其他字符，用引号

	//while(arr1!=arr2)
	//{
	//	int left = 0;
	//	int  right = strlen(arr1)-1;
	//	while (left != right)
	//	{
	//		printf("%s\n",arr2);
	//		arr2[left] = arr1[left];
	//		arr2[right] = arr1[right];
	//		Sleep(1000);//休眠一秒
	//		system("cls");//清空屏幕
	//		right -= 1;
	//		left += 1;
	//	}
	//	if (left = right)
	//	{
	//		arr2[left] = arr1[left];
	//		arr2[right] = arr1[right];
	//		printf("%s\n", arr2);
	//		break;
	//	}
	//	//12.37，目前代码还有一点点小瑕疵
	//	//已经解决，凭自己本事写出来的第一串代码
	//}
	int i = 0;
	char password[20] = { 0 };
	printf("请输入密码");
	for (i = 0; i < 2; i++)
	{
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("密码正确，登陆成功");
			break;
		}
		else
		{
			printf("密码错误，请再次输入");
		}
	}
	if (i == 2)
	{
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("密码正确，登陆成功");
		}
		else
		{
			printf("密码错误，系统已锁定");
		}
	}
	return 0;
}






















