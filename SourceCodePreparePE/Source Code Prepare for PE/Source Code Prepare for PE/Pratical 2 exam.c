#include <stdio.h>

int main(){
	int n, remainder;
	printf("Enter an integer: ");
	scanf("%d", &n);
		do{
			remainder = n % 10;
			n /= 10;
			printf("%d ", remainder);
		}
		while(n>0);
		return 0;
}
