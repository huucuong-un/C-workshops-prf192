#include <stdio.h>

long long gt(int a)
{long long s=1;
for (int i=2;i<=a;i++)
 s*=i;
return s;}
int main()
{
 int n;
 scanf("%d", &n);

 printf("%d",(long long)gt(n));
 return 0;
}
