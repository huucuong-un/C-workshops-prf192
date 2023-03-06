#include <stdio.h>

int min(int a, int b){
    return (a < b ? a : b);
}
int max(int a, int b){
    return (a > b ? a : b);
}
 int main(){
 	long long a,b,s=0;
 	scanf("%lld%lld", &a, &b);
 	for (long long i=min(a,b)+1;i<max(a,b);i++){
 		if (i%2==0) s+=i;
 		
	 }
	 printf("%lld",s);
 }
