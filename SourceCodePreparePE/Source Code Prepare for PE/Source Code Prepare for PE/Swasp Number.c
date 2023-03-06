#include <stdio.h>

	int main(){
		int x, y, t;
	do{
		printf("\nEnter x: \n");
		scanf("%d", &x);
		printf("Enter y: \n");
		scanf("%d", &y);
			t=x;
			x=y;
			y=t;
		printf("x = %d\n", x);
		printf("y = %d", y);
	}
	while(x!=0 && y!=0);
	return 0;
	}
