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
		ret = 1;//ÿ�ν���ѭ��֮ǰ��ret���г�ʼ��
		for (i = 1; i <= a; i++)
		{
			ret *= i;//1//2
		}

		num += ret;//1//3

	}
	printf("%d\n", num);
	//�����������ʮ�ָ��ӣ�Ч�ʽϵ�
	//��������д
	int m = 0;
	int sql = 1;
	int sum = 0;
	for (m = 1; m <= 10; m++)
	{
		sql *= m;
		sum += sql;
	}
	printf("%d\n", sum);
	//�ҷ���ѧ��������Ҫ����ѧ֪ʶ�������а�
	//��һ�����������в���ĳ������     ���ֲ���

		int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
		int k = 0;
		scanf("%d", &k);
		int left = 0;
		int sz = sizeof(arr) / sizeof(arr[0]);//�����������������Ԫ�ظ���
		int right = sz - 1;
		
		while (left <= right)
		{
			int mid = (left + right) / 2;
			//�ղŴ���һֱ��ѭ����ԭ����������һ�д���д����������ȥ��
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
				printf("������ϣ��±�Ϊ:%d\n", mid);
				break;
			}
		
		}
		if (left > right)
		{
			printf("δ�ҵ�����");
		}
	return 0;
}
























