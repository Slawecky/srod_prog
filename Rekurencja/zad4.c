#include <stdio.h>

int nwd(int a, int b)
{
  if(a>b)
  {
    return nwd(a-b,b);
  }
  if(a<b);
  {
    return nwd(b-a,a);
  }
}
int main()
{
  int x,y;
  scanf("%d %d",&x,&y);
  printf("%d\n",nwd(x,y));
}
