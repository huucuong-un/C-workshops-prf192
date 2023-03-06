#include<stdio.h>
int main()
{
int a,b,k,n,i;
scanf("%d",&n);
k=0;
	while(k<n-1)
	{
		a=k;
		for(i=1; i<=a; i++) printf(" ");
		b=n-k;
		for(i=1; i<=b; i++) printf("*");
		printf("\n");
		k++;
	}
		k=n-1;
		a=k;
		for(i=1; i<=a; i++) printf(" ");
		b=n-k;
		for(i=1; i<=b; i++) printf("*");
}


