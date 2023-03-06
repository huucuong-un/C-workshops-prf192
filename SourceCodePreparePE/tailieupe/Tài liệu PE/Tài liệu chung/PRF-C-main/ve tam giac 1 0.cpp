#include<stdio.h>
int main()
{
int n,i,j,a0=1,a;
scanf("%d",&n);


for (i=1;i<=n;i++)
	{a=a0;
	for(j=1; j<=i; j++) 
		{printf("%d",a); printf(" "); 
		a=!a;
		}
	printf("\n");
	a0=!a0;
	}

}

