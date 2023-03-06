#include "stdio.h"
#include "math.h"
int main(){
	int a = 5;
	int b = 2;
	float kq = (float)a/b;
	printf("floor(a/b) = %.1f", floor(kq));
	printf("\nceil(a/b) = %.1f", ceil(kq));
	printf("\nsqrt(9) = %.1f", sqrt(9));
	printf("\n5^2 = %.1f", pow(5,2));
	printf("\n|-5| = %d", abs(-5));
	printf("\n|-5.2| = %.1f", fabs(-5.2));
}
