

int global = 100;
//全局变量-位于{}外部
//注意刚才报错了，这里的int 没有加分号
int main()
{
	int global = 10;
	//当全局变量与局部变量冲突时，局部变量优先

	return 0;
}