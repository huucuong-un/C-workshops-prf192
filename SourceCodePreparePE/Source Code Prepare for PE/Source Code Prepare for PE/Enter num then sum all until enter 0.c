#include <stdio.h>

	int main(){
		int x, s = 0;
	do{
		printf("Enter x: \n");
		scanf("%d", &x);
			s = s + x;
	}
	while(x!=0);
		printf("Sum = %d ", s);
	return 0;
	}
