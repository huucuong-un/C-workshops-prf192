#include <stdio.h>

double factorial(int n){
	double p=1;
	int i;
		for (i=2;i<=n;i++)
			p *= i;
			return p;
	
}

int main(){
	unsigned int n;
		do{
			printf("Enter Positive interger n: ");
			scanf("%d", &n);
		}
		while(n<0);
		printf("%d! = %lf", n, factorial(n));
		return 0;
}
