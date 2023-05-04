#include <stdio.h>
int main()
{
  int a=10,b=15;
  a=a+b-(b=a);
  printf("a= %d\nb= %d\n",a,b);
}
