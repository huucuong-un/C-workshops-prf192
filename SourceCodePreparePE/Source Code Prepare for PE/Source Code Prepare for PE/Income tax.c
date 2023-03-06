#include <stdio.h>

int main(){
	long long pa = 9000000, pd = 3600000;
	double  income, tf, ti, it;
	int n;
		printf("Your income of this year: ", income);
		scanf("%lf", &income);
		printf("Number of dependent: ", n);
		scanf("%d", &n);
			tf = 12*(pa + n * pd);
		printf("Tax-free income:%lf \n", tf);
			ti = income - tf;
if(ti<=0){
	printf("Taxable Income: %lf\n", 0);
	printf("Income tax: %lf", 0 );	
}
if(ti> 0)
	printf("Taxable Income: %lf\n", ti);
if(0 < ti && ti <= 5000000)
	printf("Income Tax: %lf\n", ti * 0.05);
if(5000001 <= ti && ti <= 10000000)
	printf("Income Tax: %lf\n", (5000000 * 0.05 + (ti - 5000000) * 0.1));
if(10000001 <= ti && ti <= 18000000)
	printf("Income Tax: %lf\n", (5000000 * 0.05 + 5000000 * 0.1 + (ti - 10000000) * 0.15));
if(ti > 18000000)
	printf("Income Tax: %lf", (5000000 * 0.05 + 5000000 * 0.1 + 8000000 * 0.15 + (ti - 18000000) * 0.2));
	return 0;
}
	

	
	
