#include <stdio.h>

int main(){
	int n, i, product, sum = 0;
    	scanf("%d", &n);
    int a[1000];
    	for (i = 0; i < n; i++) {
        	scanf("%d", &a[i]);
        		if(a[i] % 2 == 0){
        			product = a[i] * a[i];
        			sum = sum + product;
				}
				}
    		printf("%d", sum);	
    			return 0;
}
