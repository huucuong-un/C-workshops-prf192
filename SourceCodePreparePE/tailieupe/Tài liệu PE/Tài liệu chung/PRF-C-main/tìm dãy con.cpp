#include<stdio.h>

int main(){
	int n,x,y,sum,t;
	long long a[1000];
	char ktra;
	scanf("%d", &n);
	for (int i=0;i<n;i++){scanf("%lld", &a[i]);	}
	sum=a[0];
	ktra='F';
	for (int i=0;i<n;i++){
	 for (int j=i+1;j<n;j++){
	 	sum +=a[j];
	 	if (sum % 9==0){
		 ktra='T';
		 x=i;
		 y=j;
		 }
	 	
	 }} 
	 //printf("%d %d\n",x,y);
	 //if (ktra=='T'){for (int i=x;i<=y;i++){printf("%d",a[i]);}
	 switch (ktra) {
	 	case 'F': printf("-1");
	 				  break;
	 	case 'T' : {for (int i=x;i<=y;i++){printf("%lld ",a[i]);}
			break;
		 }
	 }
	 //return 0;
	 }
	

