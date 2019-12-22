#include <stdio.h>
int main()
{
  void Hanoi(int n,char one,char two,char three);
  int m;
  printf("input the number of diskes:");
  scanf("%d",&m);
  printf("The step to move %d diskes:\n",m);
  Hanoi(m,'A','B','C');
  return 0;
}
 
void Hanoi(int n,char one,char two,char three)
{
  void move(char x,char y);
  if(n==1)
    move(one,three);
   else
   {
      Hanoi(n-1,one,three,two);
      move(one,three);
      Hanoi(n-1,two,one,three);
   }
}

void move(char x,char y)
{
    printf("%c->%c)\n",x,y);
}
