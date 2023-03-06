#include <stdio.h>
#include <math.h>

int main (){
	int i, n, flag = 1;
		printf("Enter an integer: ");
		scanf("%d", &n);
	for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
 
    if (n <= 1)
        flag = 0;
 
    if (flag == 1) {
        printf("Prime");
    }
    else {
        printf("Not prime");
    }
 
    return 0;
}

