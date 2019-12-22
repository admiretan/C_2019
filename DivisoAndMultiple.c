#include <stdio.h>
int main()
{
	int DealDiviso(int max,int min);	//最大公约数函数声明
	int DealMultiple(int max,int min);	//最小公倍数函数声明
	int x,y;				//键盘输入两个数据变量
	printf("请输入两个数：以逗号隔开\n");
	scanf("%d,%d",&x,&y);			//从键盘输入2个数据
	if (x>y)				//区别两个数据的大小
	{
		DealDiviso(x,y);
		DealMultiple(x,y);
	}	
	else
	{
		DealDiviso(y,x);
		DealMultiple(y,x);
	}
		
	return 0;
}

//求最大公约数函数
//max:输入的大数
//min:输入的小数
int DealDiviso(int max,int min)
{
	int i;
	for (i = min; i > 1; i--)	//最大公约数从小值开始测试
	{
		if(max%i==0 && min%i==0)	//大值和小值都可以整除当前值时，则认为已找到最大公约数
		{
			printf("最大公约数为：%d\n",i );	//打印最大公约数
			break;				//已找到最大公约数结束循环
		}
	}
	if(i==1)				//若上面的循环是i=1时结束的，则最大公约数为1
		printf("最大公约数为：1\n");
	return 0;
}

//求最小公倍数函数
//max:输入的大数
//min:输入的小数
int DealMultiple(int max,int min)
{
	int i;
	for(i=max;i<(max*min+1);i++)		//从两个数中的大数开始寻找最小公倍数，直到大数与小数之积为止
	{
		if((i%max==0)&&(i%min==0))		//若当前数能同时被大数和小数整除
		{
			printf("最小公倍数为：%d",i);	//	
			break;	//找到最小公倍数就结束循环
		}
	}
	return 0;
}
