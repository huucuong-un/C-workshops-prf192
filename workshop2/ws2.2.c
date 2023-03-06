#include<stdio.h>
int main(){
	int pa=9000000, pd=3600000;
	int tf, n;
	int income;
	int ti;
	printf("Enter number: ");
	scanf("%d", &n);
	tf = 12*(pa+n*pd);
	printf("Tax-free income : %d\n", tf);
	printf("Enter income :");
	scanf("%d", &income);
	ti=income-tf;
	if(ti<=0){
		printf("Taxable income :");
		printf("Income tax = 0");
		
	}
	if(ti>0)
		printf("Taxable income : %d\n", ti);
	if(0<ti && ti<=5000000)
		printf("Income tax : %lf", ti*0.05);
	if(5000001<=ti && ti<= 10000000)
		printf("Income tax : %lf", (5000000*0.05 + (ti - 5000000)*0.1));
	if(10000001<=ti && ti<=18000000)
		printf("Income tax : %lf", (5000000*0.05 + 5000000*0.1 + (ti - 10000000)*0.15));
	if(ti>18000000)
		printf("Income tax : %lf", (5000000*0.05 + 5000000*0.1 + 8000000*0.15 + (ti - 18000000)*0.2));
	return 0;
}
