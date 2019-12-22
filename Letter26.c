//要求以2种以上的方法在屏幕上打印a;b;c;...x;y;z和A,B,C,...X,Y,Z。
//Letter26.c
//方法一
#include <stdio.h>
int main()
{
	char x1='a';
	char x2='A';
	int i; 
	for(i=0;i<26;i++)
	{
	  printf("%c;",x1+i);
	}
	printf("\n");
	for(i=0;i<26;i++)
	{
	  printf("%c,",x2+i);
	}	
	return 0;
}

//方法二
#include <stdio.h>
int main()
{
	char CharArray1[26]="abcdefghijklmnopqrstuvwxyz";
	char CharArray2[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	for(i=0;i<26;i++)
	{
		printf("%c;",CharArray1[i]);
	}
	printf("\n");
	for(i=0;i<26;i++)
	{
		printf("%c,",CharArray2[i]);
	}
	return 0;
}
