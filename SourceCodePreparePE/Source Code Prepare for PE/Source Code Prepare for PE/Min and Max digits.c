#include <stdio.h>

void printMinMaxDigits(int n){
	int digits, min, max;
		digits = n % 10;
		n = n / 10;
		min = max = digits;
	while(n > 0){
		digits = n % 10;
		n = n / 10;
		if(min > digits)
			min = digits;
		if(max < digits)
			max = digits;	
	}
		printf("Min: %d\n", min);
		printf("Max: %d\n", max);
}

int main(){
	int n;
	do{
		printf("Enter a nonnegative interger: ");
		scanf("%d", &n);
		printMinMaxDigits(n);
	}
	while(n < 0);
		return 0;
}
