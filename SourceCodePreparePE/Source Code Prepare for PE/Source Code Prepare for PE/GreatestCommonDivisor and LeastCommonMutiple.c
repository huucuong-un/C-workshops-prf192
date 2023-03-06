#include <stdio.h>

int greatestCommonDivisor(int a, int b){
	while(a != b)
		if(a > b)
			a -= b;
		else{
			b -= a;
	}
		return a;
}

int leastCommonMutiple(int a, int b){
	return a*b / greatestCommonDivisor(a, b);
}

int main(){
	int a, b, d, l;
		do{
			printf("Enter a and b: ");
			scanf("%d%d", &a, &b);
		}
		while(a <= 0 || b <= 0);
			d = greatestCommonDivisor(a, b);
			l = leastCommonMutiple(a, b);
			printf("Greatest Common Divisor: %d\n", d);
			printf("Least Common Mutiple: %d", l);
		return 0;	
}
