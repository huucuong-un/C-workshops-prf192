#include <stdio.h>
int sumDigits(int n){
	int sum = 0;
		do{
			int remainder = n % 10;
			n = n / 10;
			sum += remainder;
		}
		while(n>0);
		return sum;
}

int main(){
	int n, sum = 0;
		printf("Enter an integer: ");
		scanf("%d", &n);
			sum = sumDigits(n);
				printf("%d", sum);
					return 0;
}
