#include <stdio.h>
#define  epsi  0.0001 


int main()
{
double x,s,t;
long i;

printf("Workshop 2 - Question 2\n");
printf("=======================\n"); 

printf("x= "); scanf("%lf",&x);

s=1; i=1; t=1;

while(t>epsi)
{
t=t*x/i;
s=s+t;
i=i+1;
}

printf("e^x = %.4lf",s);
}
