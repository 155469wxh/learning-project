#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{

	int a = 0;
	int i = 0;
	int n = 10;
	int ret = 1;
	int num = 0;
	for (a = 1; a <= n; a++)//2
	{
		ret = 1;//每次进入循环之前对ret进行初始化
		for (i = 1; i <= a; i++)
		{
			ret *= i;//1//2
		}

		num += ret;//1//3

	}
	printf("%d\n", num);
	//但是这个代码十分复杂，效率较低
	//可以这样写
	int m = 0;
	int sql = 1;
	int sum = 0;
	for (m = 1; m <= 10; m++)
	{
		sql *= m;
		sum += sql;
	}
	printf("%d\n", sum);
	//我发现学编程真的需要点数学知识储备才行啊
	//在一个有序数组中查找某个数字     二分查找

		int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
		int k = 0;
		scanf("%d", &k);
		int left = 0;
		int sz = sizeof(arr) / sizeof(arr[0]);//计算结果是整个数组的元素个数
		int right = sz - 1;
		
		while (left <= right)
		{
			int mid = (left + right) / 2;
			//刚才代码一直死循环，原因是上面这一行代码写在括号外面去了
			if (arr[mid] < k)
			{
				left = mid -1;
			}
			else if (arr[mid] > k)
			{
				right = mid + 1;
			}
			else if(arr[mid]==k)
			{
				printf("查找完毕，下标为:%d\n", mid);
				break;
			}
		
		}
		if (left > right)
		{
			printf("未找到对象");
		}
	return 0;
}
























