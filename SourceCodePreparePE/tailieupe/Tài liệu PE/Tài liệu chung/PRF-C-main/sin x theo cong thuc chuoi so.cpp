#include <stdio.h>
#include <math.h>


int main()
{
double x,s,t,c;
long i;

printf("Tinh sinx theo cong thuc chuoi so\n");
printf("=======================\n"); 

printf("Enter x = "); scanf("%lf",&x);
printf("Enter c = "); scanf("%lf",&c);

s=0; i=3; t=x/1;

while(fabs(t)>c)  // hoac t<-c||t>c
{
s=s+t;
t=-t*x*x/(i*(i-1));
i=i+2;
}

printf("sin(%.1lf) = %.4lf",x,s);
}
