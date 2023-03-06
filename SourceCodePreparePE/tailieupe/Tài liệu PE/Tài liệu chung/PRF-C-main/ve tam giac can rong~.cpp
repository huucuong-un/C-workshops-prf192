#include<stdio.h>
int main()
{
int a,b,k,n=6,i;
//scanf("%d",&n);

for(k=1; k<=n-1; k++) printf("0");
printf("*\n");

i=2;
	while(i<=n-1)
	{
		a=n-i;
		for(k=1; k<=a; k++) printf("0");
		printf("*");
		b=2*i-3;
		for(k=1; k<=b; k++) printf("0");
		printf("*\n");
		i++;
	}
	
for(k=1; k<=2*n-1; k++) printf("*");
}

