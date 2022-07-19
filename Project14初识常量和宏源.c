#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#define max 1000000
#define add(x,y) x+y
//define定义宏
int main()
{

	printf("%d\n", max);
	printf("%d\n", 4*add(3, 8));
	//注意，define的作用就是一个替换，我感觉。也就是，这里的结果是20而不是44的原因，计算机的理解是，把add(3,8）替换回去之后再参与运算，就成了
	//4*3+8=20了
	return 0;
}


