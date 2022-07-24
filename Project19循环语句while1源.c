#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i==5)//千万注意=和==的区别
			break;//在while循环中，break用于永久的终止循环
		printf("%d \n", i);
		i++;
	}
	while (i <= 10)
	{
		if (i == 5)
			continue;//这个continue的意思是跳过continue以后的代码，直接跳出while，进行下一次判断是否要进入while循环
		printf("%d \n", i);
		i++;


	}
	/*int ch = getchar();
	printf("%c\n", ch);
	putchar(ch);
	return 0;*/
	return 0;
	//就写到这吧，死循环罢了
}