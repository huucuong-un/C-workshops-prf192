#include<stdio.h>
#include<string.h>

int main() {
  int n,k,a,s;
  scanf("%d%d", &n ,&k);
  a=k-(2*n);
  s=n-a;
  if (s<0) s=0;
  printf("%d", s);
    return 0;}
