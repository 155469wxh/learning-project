#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i==5)//ǧ��ע��=��==������
			break;//��whileѭ���У�break�������õ���ֹѭ��
		printf("%d \n", i);
		i++;
	}
	while (i <= 10)
	{
		if (i == 5)
			continue;//���continue����˼������continue�Ժ�Ĵ��룬ֱ������while��������һ���ж��Ƿ�Ҫ����whileѭ��
		printf("%d \n", i);
		i++;


	}
	/*int ch = getchar();
	printf("%c\n", ch);
	putchar(ch);
	return 0;*/
	return 0;
	//��д����ɣ���ѭ������
}