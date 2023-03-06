#include <stdio.h>

int main(){
	int a, b, i, sum = 0;
	printf("Enter 2 integer: ");
	scanf("%d%d", &a, &b);
		if(a % 2 == 0){
			a--;
		}
		for(i = a; i >= b; i--){
			if(i % 2 != 0){
				sum += i;
			}
		}
		printf("%d", sum);
		return 0;
}
