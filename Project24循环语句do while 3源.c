#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
//�˴����Ŀ�꣬���������м���������ӡ�ַ���
int main()
{
	//char arr1[] = "whelecom to bit!!!!!!";
	//char arr2[] = "#####################";
	////���֪ʶ�㣬char�ؼ���������ָʾ��ĸ�������ַ���������

	//while(arr1!=arr2)
	//{
	//	int left = 0;
	//	int  right = strlen(arr1)-1;
	//	while (left != right)
	//	{
	//		printf("%s\n",arr2);
	//		arr2[left] = arr1[left];
	//		arr2[right] = arr1[right];
	//		Sleep(1000);//����һ��
	//		system("cls");//�����Ļ
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
	//	//12.37��Ŀǰ���뻹��һ���С覴�
	//	//�Ѿ������ƾ�Լ�����д�����ĵ�һ������
	//}
	int i = 0;
	char password[20] = { 0 };
	printf("����������");
	for (i = 0; i < 2; i++)
	{
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("������ȷ����½�ɹ�");
			break;
		}
		else
		{
			printf("����������ٴ�����");
		}
	}
	if (i == 2)
	{
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("������ȷ����½�ɹ�");
		}
		else
		{
			printf("�������ϵͳ������");
		}
	}
	return 0;
}






















