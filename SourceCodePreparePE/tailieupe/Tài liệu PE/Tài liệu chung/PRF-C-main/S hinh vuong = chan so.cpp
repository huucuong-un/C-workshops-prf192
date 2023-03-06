#include<stdio.h>
#include<string.h>

int main() {
 
  long long s,n,i;
  scanf("%lld", &n );
  s=0;
  i=1;
  while (i<=n){
  	s+=i*i%1000000007;
      s=s%1000000007;
  	i++;
  }printf("%lld", s);
    return 0;}
