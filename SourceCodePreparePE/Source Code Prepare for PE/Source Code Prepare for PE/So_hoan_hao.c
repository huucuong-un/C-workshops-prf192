#include<stdio.h>

int main(){
	long long a[100], n, sum=0;
	int i;
	scanf("%lld", &n);
	for(i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(n<6){
		printf("NO");
	}
	else if(sum==n){
		printf("YES");
	}
	else printf("NO");
	return 0;
}
