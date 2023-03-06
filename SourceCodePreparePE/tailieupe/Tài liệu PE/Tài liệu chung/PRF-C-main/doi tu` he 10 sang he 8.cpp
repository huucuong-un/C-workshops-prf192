#include<stdio.h>

int main() {
   char c;
   scanf("%c", &c);
   printf("%c ",c);
   int n=c,i=0,a[4]={0,0,0,0};
   printf("%d ",n);
   while (n>0){
   	a[i]= n%8;
   	n=n/8;
	i++;   	
}
for (i=3;i>=0;i--) printf("%d",a[i]);}
