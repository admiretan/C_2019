//使用指向函数的指针。
//PointerFuction.c
#include <stdio.h>
int main()
{
	int max(int x,int y);
	int (*p)(int,int);    //定义一个指向函数的指针
	int a,b,c;
	p=max;                //指针指向函数
	printf("Please enter a and b:");
	scanf("%d,%d",&a,&b);
	c=(*p)(a,b);          //调用函数指针
	printf("a=%d\t b=%d\t max=%d\n",a,b,c);
	return 0;
}

//功能：求两个数中最大值
//x:    比较整数一
//y:    比较整数二
int max(int x,int y)
{
	int z;
	z=x>y?x:y;
	return z;
}
