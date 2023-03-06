#include <stdio.h>

int main(){
	int n, i ,sum = 1;
		printf("Enter an non-negative integer: ");
		scanf("%d", &n);
			for(i = 2 ; i <= n; i+=2 ){
					sum *= i;
				}
				printf("%d", sum);
		return 0;
			
		
}
