#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
 //常见关键字，是c语言规定的关键字，不能自己创建关键字
//不能把关键字当作变量名称
//1.auto是局部变量的关键字，因为局部变量在大括号里面，自动创建自动销毁，所以叫auto嘛，注意auto一般省略掉
//2.break是循环语句和switch语句中常用的
//3.extern用来声明外部符号
//4.register表示寄存器关键字，建议编译器将数据存储到编译器中，但是只是建议，决定由编译器来做，哈哈哈哈所以编译器说，我建议你不要建议
  //数据存储有：网盘，硬盘，内存，高速缓存，寄存器，从左到右空间越小，速度越快，造价越高
//5.signen有符号的，对应还有unsigned无符号的
//6.union联合体，共用体
//7.void表示空的
//8.define include是预处理指令，不是关键字
//9.typedef类型重定义，就是给一个长长的关键字重新取一个名字
//static静态的
  //static 修饰局部变量，改变的是局部变量的生命周期【本质上是改变了变量的存储类型】
    //存储类型有三种，栈区，堆区，静态区。
    //栈区存放局部变量和函数的参数
    //堆区是由动态内存分配的
    //静态区存放全局变量和被static修饰的静态变量
  //static修饰全局变量，导致全局变量只能在当前源文件使用，其他源文件不能使用。相当于改变了全局变量的外部链接属性，变成了内部链接属性
  // static修饰函数，也是一样，改变了链接属性
//extern 用来声明外部符号
typedef unsigned int u_int;
void test()
{
	static int a = 1;
	a++;
	printf("%d ",a);
}
//因为创建变量a之后，在出了test函数之后，a就被销毁，所以结果一直都是2
//这里如果加上static，就会出现2——11连续排列的结果，因为a没有被销毁
extern int add(int x, int y);
int main()
{
	u_int num = 100;
	int i = 0;
	while (i < 10)
	{
		i++;
		test();
	}
	int x=100;
	int y=90;
	int sum = add(x, y);
	printf(" %d ", sum);

	return 0;
}