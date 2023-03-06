#include <stdio.h>

int getRelPos(double x, double y, double r){
	double d2 = x * x + y * y, r2 = r * r;
	if(d2 < r2)
		return 1;
	else if(d2 == r2)
		return 0;
		return -1;
}

int main(){
	double x, y, r;
	int result;
		printf("Enter X and Y: ");
		scanf("%lf%lf", &x, &y);
		do{
			printf("Enter r: ");
			scanf("%lf", &r);
		}
		while(r<0);
			result = getRelPos(x, y, r);
			if(result == 1)
				printf("The point is in the circle!");
			else if(result == 0)
				printf("The point is on the circle!");
			else 
				printf("The point is out of the circle!");
			return 0;
} 
