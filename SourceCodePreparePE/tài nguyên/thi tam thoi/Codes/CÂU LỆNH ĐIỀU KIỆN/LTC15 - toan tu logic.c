#include "stdio.h"
int main(){
	int a = 5 > 2;
	int b = 10 >= 99;
	int c = 1;
	printf("%d && %d = %d", a, b, a&&b);
	printf("\n%d && %d = %d", a, c, a&&c);
	printf("\n%d || %d = %d", a, b, a||b);
	printf("\n%d || %d = %d", a, c, a||c);
	printf("\n!%d = %d", a, !a);
	printf("\n!%d = %d", b, !b);
}
