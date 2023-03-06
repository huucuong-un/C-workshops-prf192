#include <stdio.h>

int main(){
	int i, a[7];
	for(i = 0; i < 7; i++){
		scanf("%d", &a[i]);
	}
		if(a[0] > 9){
			printf("%d ", a[0]);
		}
		else if(a[1] > 9){
			printf("%d ", a[1]);
		}
		if(a[2] > 9){
			printf("%d ", a[2]);
		}
		if(a[3] > 9){
			printf("%d ", a[3]);
		}
		if(a[4] > 9){
			printf("%d ", a[4]);
		}
		if(a[5] > 9){
			printf("%d ", a[5]);
		}
		if(a[6] > 9){
			printf("%d ", a[6]);
		}
		else{
			printf("No-two digits number!");
		}

		
	return 0;
}
