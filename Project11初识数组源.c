#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//数组，就是一组数的集合
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int ch[5] = { 'a','b','c' };//这个数组里面只有三个元素，称之为不完全初始化
	int i = 0;
	//数组的调用使用的方式是下标
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}


	return 0;
}