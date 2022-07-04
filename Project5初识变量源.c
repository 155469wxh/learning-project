#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>;
#define MAX 10000;
enum Sex
{
	//枚举常量的初始可能取值，可以修改初始数值
MEAL = 6,//这里的6就是修改后的值
FEMEAL,
SECRET,
};
int main()
{
//1.字面常量	//	
//3.14
//10
//a
//abcde
//2.const修饰的常变量//
	//常变量具有常属性（不能改变的属性）
	const int num = 10;//这是变量
	//左值指定的const对象//num = 20;//没加const时出现的结果是20，说明num是变量
	//！！！！！注意常变量的本质还是变量，就像烂橘子还是橘子
	printf("%d\n", num);
	int n = MAX;
	//常量代表数值不能改
	//int n = 10;
	//输入int n会报错 应输入常量表达式
	//输入const int n也会报错，说明const int 依然是变量，本质是变量
	//常变量是具有常属性的变量
	//int arr[n];
//3.#deffine  定义的标识符常量
	printf("n=%d\n", n);
	//这一步必须加n=,不然打印的就是二进制形式
//4.枚举常量
	printf("%d\n", MEAL);
	printf("%d\n", FEMEAL);
	printf("%d\n", SECRET);
	//
	return 0;
}