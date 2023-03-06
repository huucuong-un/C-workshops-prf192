#include<stdio.h>
#include<math.h>
//bai 1: thap phan sang nhi phan
//main(){
//    int a[100], i,tachso,luukq;
//    float n,k,j;
//    printf("nhap n ");
//    scanf("%f",&n);
//    j=(int)n; 
//    tachso=j; 
//    k=n-j; 
//    for (i=0; tachso>0;i++){	
//    	a[i]=tachso%2;
//    	tachso=tachso/2;
//	}
//	for (i=i-1;i>=0;i--){
//		printf("%d",a[i]);
//	}
//	printf(".");
//	while (k>0 && k<2){
//		k=k*2;
//		if (k < 1){
//			luukq=(int)k%2;
//			printf("%d",luukq);
//		}
//		if (k>=1 && k<2){
//			luukq=(int)k%2;
//			k=k-1;
//			printf("%d",luukq);	
//		}
//	}
//}
//bai 2: nhi phan sang thap phan
main(){
    double n,k;
	int m=0,l=0;
	int i=0;
	int luuso;
	double tachso;
	double luukq;
	printf("nhap n ");
	scanf("%lf",&n);
	luuso=(long long int)n; 
	tachso=n-luuso; 
	while (luuso!=0){
		m=m+ (luuso%2)*pow(2,i);
		i++;
		luuso=luuso/10;
	} 
	int j=-1;
	while (tachso>0){ //phan sau dau phay
		tachso=tachso*10;
		l=tachso; //lay so nguyen de chia du
		tachso=tachso-l;
		k=k+ (l%2)*pow(2,j);
		j--;
	} 
	luukq=m+k;
	printf("gia tri la %lf",luukq);
}