#include <stdio.h>
#include <math.h>

int prime(int n){
int m = sqrt(n);
int i;
	if(n<2)
	return 0;
	for(i=2;i<=m;i++){
		if(n%i==0){
		return 0;
	}
}
		return 1;

}

		
int main(){
	 int n, i;
	do{
		printf("Enter a positive interger n: ");
		scanf("%d", &n);
	}
	while(n<2);
	for(i=2;i<=n;i++){
		if(prime(i)==1)
		printf("Prime between 2 to n: %d\n", i);
	}
	return 0;
}
