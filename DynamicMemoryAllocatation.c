#include <stdio.h>
#include <stdlib.h>

int main()
{
  void check(int *p);
  int *p1,i;
  p1=(int *)(malloc(5*sizeof(int)));
  for(i=0;i<5;i++)
    scanf("%d",p1+i);
  check(p1);
  return 0;
}

void check(int *p)
{
  int i;
  for(i=0;i<5;i++)
  {
    if(*(p+i)<60)
      printf("%d\t",*(p+i));
  }
}
