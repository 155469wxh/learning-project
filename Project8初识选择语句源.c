#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
#include <string.h>;

int main()
{
	int input = 0;
	printf("hello?(1/0)>");
		scanf("%d", &input);
		//语法规则不能忘啊&&&&&&&&&&&&&&&&&&input
		if (input == 0)
		{
			printf("hello");
		}
		else
			//else后面不能加分号啊啊啊啊啊啊啊啊啊
	{
		printf("shit");
	}
		return 0;
}