#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
#include <string.h>;

//�ַ�������������������һ���ַ�
//���������ַ���˫�������ַ���


int main()
{
	char arr1[] = "hello";
	char arr2[] = "abc";
	char arr3[] = { 'a','b','c' };
	char arr4[] = { 'a','b','c','\0' };
	char arr5[] = { '\0' };
//�ַ�������һ��ͬ���͵�Ԫ��
//����һ��С���⣬�޷��ҵ����Ӵ���
	//���������ֱ���Ȱ�F10������ԣ��Ż���ּ��Ӵ���
	//-		arr	0x00000045ba7dfc64 "hello"	char[6]
//������һ��С���⣬����F10֮�󱨴�û���ڴ�ʲô��
	//��������ǣ���סreturn0֮ǰ��С��ͣ��
	//�ַ����Ľ�����־��\0
	printf("%s\n", arr1);//��ӡ���hello
		printf("%s\n", arr2);//��ӡ���abc
		printf("%s\n", arr3);//��ӡ�������
		//����ԭ��û�п�ʶ��Ľ����ַ�\0
		//����취�ֶ����\0����
		printf("%s\n", arr4);//��ӡ���abc
		//����ɹ�����������ǣ��ַ�����\0�ǽ�����־��û�н�����־�ͻ�����
		printf("%s\n", arr5);


		//��һ���ַ����ĳ���
		int len = strlen("abc");
		//�¼����ĺ���strlen��string length����д
		//ע�⺯������ʱҪд������
		printf("%d\n", len);//3
		printf("%lld\n", strlen(arr1));//5
		printf("%lld\n", strlen(arr2));//3
		printf("%lld\n", strlen(arr3));//���ֵ(35)��Ϊû����ֹ��
		printf("%lld\n", strlen(arr4));//3
		printf("%lld\n", strlen(arr5));//0
		//�ղų��ֱ���printf("%lld\n", strlen(arr1));//5����ʱ����C6328����ԭ����strlen�ķ���������һ��64λ���޷������ͣ�����Ҫ�ó�������
	return 0;
}