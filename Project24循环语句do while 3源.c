#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//�˴����Ŀ�꣬���������м���������ӡ�ַ���
int main()
{
	char arr1[] = "whelecom to bit!!!!!!";
	char arr2[] = "#####################";

	while(arr1!=arr2)
	{
		int left = 0;
		int  right = strlen(arr1)-1;
		while (left != right)
		{
			printf("%s\n",arr2);
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			right -= 1;
			left += 1;
		}
		if (left = right)
		{
			arr2[right] = arr1[right];
			printf("%s", arr2);
			break;
		}
		//12.37��Ŀǰ���뻹��һ���С覴�

	}
	
	
















	return 0;
}






















