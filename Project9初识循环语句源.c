#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
#include <string.h>;
//��ʶѭ�����
int main()
{
	int line = 0;
	while (line < 30000)
		//while���治�ܼӷֺţ�Ӧ���ڴ������ڼӷֺ�
	{
		printf("д����%d\n", line);
		line++;
		//����Ӻű�������������Ϊ�﷨����
		//��һ�����ô�������ȥ�Ĺؼ�֮һ
	}
	if (line = 30000)
		//����ĵȺſ�����һ��
	{
		printf("%s\n", "good offer");
	}


	return 0;
}