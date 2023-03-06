#include<stdio.h>
int main()
{
int a,n,i,j;
scanf("%d",&n);
a=1;

i=1;
while(i<n)
{
	for(j=1; j<i; j++) 
		{
		printf("%d",a); printf(" "); 
		a++;
		}
		printf("%d",a); 
		a++;
	printf("\n");
 i++;	
}
i=n;
for(j=1; j<i; j++) 
		{
		printf("%d",a); printf(" "); 
		a++;
		}
		printf("%d",a); 
		a++;
}

