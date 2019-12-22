#include <stdio.h>
int main()
{
	int DealDiviso(int max,int min);
	int DealMultiple(int max,int min);
	int i;
	int x,y;
	printf("请输入两个数：以逗号隔开\n");
	scanf("%d,%d",&x,&y);
	if (x>y)
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

int DealDiviso(int max,int min)
{
	int i,j;
	for (i = min; i > 1; i--)
	{
		if(max%i==0 && min%i==0)
		{
			printf("最大公约数为：%d\n",i );
			break;
		}
	}
	if(i==1)
		printf("最大公约数为：1\n");
	return 0;
}

int DealMultiple(int max,int min)
{
	int i;
	printf("max=%d,min=%d\n",max,min);
	for(i=max;i<(max*min+1);i++)
	{
		if((i%max==0)&&(i%min==0))
		{
			printf("最小公倍数为：%d",i);
			break;
		}
	}
}
