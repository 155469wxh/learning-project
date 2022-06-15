


#include <stdio.h>
//刚才又忘了引用头文件
int main()
{
	printf("%d\n", 100);
//只有加了\n才会换行打印
	printf("%d\n", 99);
		//括号中表示函数的参数第一个参数是%d，表示打印整数
		//第二个参数就是要打印的数字，整数
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long ));
	printf("%d\n", sizeof(long long ));
	printf("%d\n", sizeof(float ));
	printf("%d\n", sizeof(double));
	//Ctrl+D表示复制一行
	//char表示字符数据类型
	//short表示短整型
	//int表示整形
	//long 表示长整型
	//long long 表示更长的整形
	//float 表示单精度浮点数
	//double 表示双精度浮点数
	//浮点就是小数点因为有科学计数法所以小数点你可以移动，称之为浮点
	return 0;
	//千万别忘了语法规则的分号

}