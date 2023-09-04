#include <stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  a=a+b-(b=a);
  printf("a= %d\nb= %d\n",a,b);
}
