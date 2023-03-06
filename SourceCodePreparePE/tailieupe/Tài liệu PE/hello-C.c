//hello c// 
//#include<stdio.h>
//main()
//{
//printf("hello C");
//} 
//**********************************************************
//tinh tong 2 so// 
//#include<stdio.h>
//main()
//{
//	int a,b,t;
//	printf("Input a=") ;
//	scanf("%d", &a) ;
//	printf("Input b="); 
//	scanf("%d", &b);
//	t=a+b;
//	printf("Sum of %d & %d is %d.\n", a,b,t);	
// } 
//***********************************************************
//nhap ban kinh hinh tron, tinh chu vi va dien tich
//#include<stdio.h>
//#defind PI 3.14
//main()
//{
//	float R, C, S
//	printf("Ban kinh hinh tron R=");
//	scanf("%f", &R);
//	C=2*PI*R
//	S=R*R*Pi
//	prinf("Chu vi hinh tron C = %g\n", C);
//	prinf("Dien tich hinh tron S = %g\n", S); 
// } 
//*************************************************************
//trung binh cong va trung binh nhan 5 so// 
//#include<stdio.h>
//#include<math.h>
//main()
//{
//	int a,b,c,d,e;
//	float t,s; 
//	printf("Input a=\n");
//	scanf("%d", &a) ;
//	printf("Input b=\n"); 
//	scanf("%d", &b);
//	printf("Input c=\n"); 
//	scanf("%d", &c);
//	printf("Input d=\n"); 
//	scanf("%d", &d);
//	printf("Input e=\n"); 
//	scanf("%d", &e);
//	t=(a+b+c+d+e)/5;
//	s=pow(a*b*c*d*e, 0.2); 
//	printf("Trung binh cong cua nam so la %g.\n", t ) ;
//	printf("Trung binh nhan cua nam so la %g.\n", s );
// } 
//**********************************************************************************
 //nhap vao n so, in ra trung binh cong va trung binh nhan//
// #include<stdio.h>
// #include<math.h>;
// main() {
//	int i, n, a;
//	float tbc, tbn, S=0, P=1, x; 
//	printf("input n =\n");
//	scanf("%d", &n);
//	
//	for(i=0;i<n;i++) {
//		printf("Nhap phan tu thu %d: ", i + 1);
//		scanf("%d", &a);
//		S = S + a;
//		P = P * a; 
//	}
//	
//tbc = S/n;
//x = 1.0/n;
//tbn = pow(P,x);
//printf("trung binh cong: %f\ntrung binh nhan: %f", tbc, tbn); 
//	return 0;
//}

//*****************************************************************************************
//nhap vao 2 so bat ki a va b va in ra su so sanh cua a va b
// #include<stdio.h>
// int main()
// {
// 	float a,b;
// 	printf("Nhap so a =");
// 	scanf("%f", &a);
// 	printf("Nhap so b =");
// 	scanf("%f", &b);
// 	
//	 if(a>b) printf("Ket qua: a > b");
//	else if (a==b) printf("Ket qua: a = b");
//	else printf("Ket qua: a < b");
//	return 0; 
//	 } 
	  
  
//**************************************************************************************
//Nhap 3, 4, 5 so a, b, c. Tinh min, max, tbc
//#include <stdio.h>
//main()
//{
//	float a, b, c, t;
//	printf("Nhap so a =");
//	scanf("%f", &a);
//	printf("Nhap so b =");
//	scanf("%f", &b);
//	printf("Nhap so c =");
//	scanf("%f", &c);
//	
//	if(a>b>c) printf("Ket qua: a max, c min");
//	else if (a>c>b) printf("Ket qua: a max, b min");
//	else if (b>a>c) printf("Ket qua: b max, c min");
//	else if (b>c>a) printf("Ket qua: b max, a min");
//	else if (c>a>b) printf("Ket qua: c max, b min"); 
//	else printf("Ket qua: c max, a min");
//	
//	t = (a+b+c)/3;
//	printf("\nTrung binh cong cua 3 so la %f", t); 
//}

//*********************************************************************************************
//Nhap n so, in ra gia tri trung binh, min max 
//#include <stdio.h>
//int main(){
//int i;
//double n, t, tong=0, min, max;
//printf("Nhap n = ");
//scanf("%lf",&n);
//printf("Nhap so thu 1 = ");
//scanf("%lf", &t);
//tong += t;
//min = t;
//max = t;
//for (i=2; i<=n; i++){
//	printf("Nhap so thu %d = ", i);
//	scanf("%lf", &t);
//	tong += t;
//	if (t<min){
//		min = t; 
//	} else if (t>max){
//		max = t; 
//	} 
//} 
//  printf("TBC = %lf\nMin = %lf\nMax = %lf", tong/n, min, max); 
//
//	return 0;
//}

//*********************************************************************************
//Nhap 3 so vao va xet dk tam giac, va neu la tam giac thi in ra chu vi va dien tich
//#include <stdio.h>
// 
//int main()
//{
//    float a, b, c, p, p1, s;
//    printf("\nNhap a: ");
//    scanf("%f", &a);
//    printf("\nNhap b: ");
//    scanf("%f", &b);
//    printf("\nNhap c: ");
//    scanf("%f", &c);
//    p1=a+b+c;
//    p=p1/2;
//    s=sqrt(p*(p-a)*(p-b)*(p-c));
//
//    if(a>0 && b>0 && c>0 && (a+b)>c && (b+c)>a && (c+a)>b){
//    printf("\nOutput\n");
//	printf("ABC la tam giac");
//	printf("\nChu vi tam giac: %0.2f", p1);
//	printf("\nDien tich tam giac: %0.2f", s);
//}
//    else{
//    	printf("\nOutput\n");
//    	printf("\nABC khong phai tam giac");
//	}
//}

//*********************************************************************************************8
//Nhap so giay, in ra thang ngay gio phut giay
//#include<stdio.h> 
//int main()
//{
//     long long giay;
//     int so_du; 
//     printf("Nhap vao so giay: ");
//     scanf("%d",&giay);
//  
//     int nam = giay / 31536000; 
//     so_du =  giay % 31536000;
//	 int thang = so_du / 2629743; 
//	 so_du = so_du % 2629743;
//	 int ngay = so_du / 86400; 
//	 so_du = so_du % 86400;
//	 int gio = so_du / 3600;
//	 so_du =  so_du % 3600; 
//     int phut = so_du / 60;
//     giay = so_du % 60;
//     printf("nam:%.2d,thang:%.2d,ngay:%.2d,gio:%.2d,phut:%.2d,giay:%.2d",nam,thang,gio,phut,giay);
//  
//     return 0;
//}

// Cách 2  
//#include<stdio.h> 
//int main(){
//	int n;
//	printf("input so giay n = ");
//	scanf("%d", &n); 
//	if((n/31104000)!=0) printf("%d nam",n/31104000);
//	n=n%31104000; 
//	if((n/2592000)!=0) printf("%d thang ",n/2592000);
//	n=n%2592000;
//	if((n/86400)!=0) printf("%d ngay ",n/86400);
//	n=n%86400;
//	if((n/3600)!=0) printf("%d gio ",n/3600);
//	n=n%3600;
//	if((n/60)!=0) printf("%d phut ",n/60);
//	printf("%d giay",n%60);
//	return 0; 
//} 

//***************************************************************************************************************
//Nhap so, doi ra tien
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//int main()
//{
//int so_tien;
//int n;
//printf("Nhap vao so tien (nghin):");
//scanf("%d", &so_tien);
//if (so_tien <= 0)
//{
//printf("\nNhap lai so tien (khong am):");
//scanf("%d", &so_tien);
//}
//
//if(n>=500) printf("\nSo to 500k là : %d", so_tien / 500); n = so_tien % 500; 
//if(n>=200) printf("\nSo to 200k là: %d", n / 200); n = n % 200; 
//if(n>=100) printf("\nSo to 100k la: %d", n / 100); n = n % 100; 
//if(n>=50) printf("\nSo to 50k la: %d", n / 50); n = n % 50; 
//if(n>=20) printf("\nSo to 20k la: %d", n / 20); n = n % 20; 
//if(n>=10) printf("\nSo to 10k la: %d", n / 10); n = n % 10; 
//if(n>=5) printf("\nSo to 5k la: %d", n / 5); n = n % 5; 
//if(n>=2) printf("\nSo to 2k la: %d", n / 2); n = n % 2; 
//if(n>=1) printf("\nSo to 1k la: %d", n / 1); n = n % 1; 
//_getch();
//}  
//***********************************************************************************************
//Giai phuong trinh bac nhat, bac 2, tinh giai thua, tinh tong cac chu so cua mot so
//Giai phuong trinh bac nhat
//#include<stdio.h>
//
//main(){
//
//  float a,b;
//  printf("\nNhap he so a: ");
//  scanf("%f",&a);
//  printf("\nNhap he so b: ");
//  scanf("%f",&b);
//  if(a==0){      
//    if(b==0){    
//      printf("\nPhuong trinh vo so nghiem");
//    }else{      
//      printf("\nPhuong trinh vo nghiem");
//    }
//  }else{       
//    printf("\nPhuong trinh co nghiem x=%g",-b/a);
//  }
//
//  return 0;
//} 
//************************************************************************************
//Giai phuong trinh bac 2
//#include <stdio.h>
//#include <math.h>  
//
//int giaiPTBac2(float a, float b, float c) {
//    if (a == 0) {
//        if (b == 0) {
//            printf("Phuong trinh vo nghiem!");
//        } else {
//            printf("Phuong trinh co mot nghiem: x = %f", (-c / b));
//        }
//
//    }
//   
//    float delta = b*b - 4*a*c;
//    float x1;
//    float x2;
//    
//    if (delta > 0) {
//        x1 = (float) ((-b + sqrt(delta)) / (2*a));
//        x2 = (float) ((-b - sqrt(delta)) / (2*a));
//        printf("Phuong trinh co 2 nghiem la: x1 = %f va x2 = %f", x1, x2);
//    } else if (delta == 0) {
//        x1 = (-b / (2 * a));
//        printf("Phong trinh co nghiem kep: x1 = x2 = %f", x1);
//    } else {
//        printf("Phuong trinh vo nghiem!");
//    }
//}
//int main() {
// float a, b, c;
//    printf("Nhap he so bac 2, a = ");
//    scanf("%f", &a);
//    printf("Nhap he so bac 1, b = ");
//    scanf("%f", &b);
//    printf("Nhap so hang tu do, c = ");
//    scanf("%f", &c);
//    giaiPTBac2(a, b, c);
//}

//*****************************************************************************
//Tinh giai thua
//#include <stdio.h>
//
//int main()
//
//{
//
// int c, n, t = 1;
//
// printf("nhap so de tinh giai thua\n");
//
// scanf("%d", &n);
//
// for (c = 1; c <= n; c++)
//
//   t = t * c;
//
// printf("giai thua cua %d = %d\n", n, t);
//
// return 0;
//
//} 

//*************************************************************************************
//Tinh tong cac chu so cua 1 so
//#include<stdio.h>  
//#include<conio.h>  
//
//int main()  
//{  
//int n,tong=0,m;  
//
//printf("Nhap mot so bat ky: ");  
//scanf("%d",&n);  
//while(n>0)  
//{  
//m=n%10;  
//tong=tong+m;  
//n=n/10;  
//}  
//printf("\nTong cac ky so cua so da cho = %d",tong);  
//getch();  
//}   


//********************************************** CAC BAI TAP VE SO NGUYEN TO ************************************************************
// Nhap so nguyen n, neu la so nguyen to thi in ra, neu khong phai thi in ra cac uoc cua no
//#include <stdio.h>
//#include <math.h>
// 
//int main(){
//    int n,i;
//    printf("Nhap n = ");
//    scanf("%d", &n);
//    if(n < 2){
//        printf("\n%d khong phai so nguyen to", n);
//        return 0;
//    }
//    int count = 0;
//    for(int i = 2; i <= sqrt(n); i++){
//        if(n % i == 0){
//            count++;
//        }
//    }
//    if(count == 0){
//        printf("\n%d la so nguyen to", n);
//    }else{
//        printf("\n%d khong phai so nguyen to", n);
//        printf("\nCac uoc cua n la:");
//        for (i=1;i<=n;i++)
//        if (n%i==0) printf("\n %d", i);
//    }
//}
//Nhap n
//a. in ra n so nguyen to
//#include<stdio.h>
//
//
//void nhap(int a[]; int "&amp";n){
//    do{
//        printf("Nhap n: ");
//        scanf("%d",&amp;n);
//    }
//    while(n<2||n>99);
//     
//    for(int i=0; i<n; i++){
//        printf("a[%d]: ",i);
//        scanf("%d",&amp;a[i]);
//    }
//}
// 
//void xuat(int a[], int n){
//    for(int i=0;i<n;i++){
//        printf("%5d",a[i]);
//    }
//}
//int ktrant(int n){
//    if(n<2)
//        return 0;
//    else{
//        for(int i=2;i<=n/2;i++)
//            if(n%i==0)
//                return 0;
//        return 1;
//    }
//}
// 
//void insonguyento(int a[], int n){
//    printf("\nCac so nguyen to co trong mang la: \n");
//    for(int i=0;i<n;i++)
//        if(ktrant(a[i]))
//            printf("%5d",a[i]);
//}
//int main(){
//    int a[100];
//    int n;
//    nhap(a,n);
//    insonguyento(a,n);
//    return 0;
//}

//b. in ra cac so nguyen to tu 1 den n
//#include<stdio.h>
//#include<math.h>
// 
//int r(int n) {
//    if (n < 2) {
//        return 0;
//    }
// 
//    int i;
//    int cann = sqrt(n);
//    for (i = 2; i <= cann; i++) {
//        if (n % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
// 
//int main() {
// int n;
//    printf("Nhap n = ");
//    scanf("%d", &n);
//    printf("%d so nguyen to dau tien la: \n", n);
//    int dem = 0; 
//    int i = 2;   
//    while (dem < n) {
//        if (r(i)) {
//            printf("%d ", i);
//            dem++;
//        }
//        i++;
//    }
//}
//Nhap n, in ra n so amstrong, fibonary, palindrome, 
//*******************************************************************************************
//Kiem tra so Armstrong
//#include <stdio.h>
//main()
//{
//	int n,r,temp,sum=0;
//	printf("Nhap n=");
//	scanf("%d",&n);
//	temp=n;
//	while(n>0){
//		r=n%10;
//		sum=sum+(r*r*r);
//		n=n/10;
//	}
//if(temp==sum)
//printf("\nn la so Armstrong");
//else
//printf("\nn khong phai so Armstrong");
//}
//********************************************************************************************
//N so Armstrong dau tien
//#include<stdio.h>
//int check(int x)
//{
//	int res=0, count=0;
//	int y=x;
//	while (y){
//		++count;
//		y/10;
//	}
//	y=x;
//	while (y){
//		int i, tg=1;
//		for (i=1;i<=count;i++) tg*=y%10;
//		res+=tg;
//		y/=10;
//	}
//	return (res==x);
//	
//}
//int main(){
//	int n;
//	printf("Input n=");
//	scanf("%d",&n);
//	int i=0;
//	printf("%d so Armstrong dau tien la:",n);
//	int count=0;
//	while (count<n){
//		if(check(i)){
//			++count;
//			printf("%d",i);
//		}
//		++i;
//	}
//	return 0;
//}
//cdl khong chay 
//*******************************************************************************
//In n so fibonacci
//#include<stdio.h>  
//#include<conio.h>  
//
//int main()  
//{  
// int n1=0,n2=1,n3,i,sopt;  
//  
// printf("Ban hay nhap so phan tu trong day Fibonacci: ");  
// scanf("%d",&sopt);  
// printf("\n%d %d",n1,n2); 
//  
// for(i=2;i<sopt;++i)   
// {  
//  n3=n1+n2;  
//  printf(" %d",n3);  
//  n1=n2;  
//  n2=n3;  
// }
//}
//***********************************************************************************
//In so fibonacci lien truoc, lien sau va kep giua n
//#include<stdio.h>
//int fibonacci(int n){
//	if(n==0){
//		return 0;
//	}
//	else if(n==1){
//		return 1;
//	}
//	else{
//		return fibonacci(n-1) + fibonacci(n-2);
//	}
//}
//main(){
//	int n, i;
//	printf("Nhap n=");
//	scanf("%d",&n);
//	int p=0;
//	while(fibonacci(p)<n){
//		p++;
//	}
//	printf("2 so fibonacci lien sau n la: %d %d\n", fibonacci(p),fibonacci(p+1));
//	printf("2 so fibonacci kep giua n la: %d %d\n", fibonacci(p-1),fibonacci(p));
//	printf("2 so fibonacci lien truoc n la: %d %d\n", fibonacci(p-2),fibonacci(p-1));
//}
//************************************************************************************
// Nhap n, in ra 2 so fibonacci lon hon n, nho hon n hoac 1 lon 1 nho hon
//#include<stdio.h> 
//int main(){
//	int n,i,a[1000];
//	printf("Nhap n=");
//	scanf("%d",&n);
//	a[1]=0,a[2]=1;
//	i=3;
//	if (n>0){
//		while(a[i-1]<=n){
//			a[i]=a[i-1]+a[i-2];
//			i++;
//		}
//		printf("%d %d",a[i-1],a[i-2]);
//		printf("%d %d",a[i-2],a[i-3]);
//		printf("%d %d",a[i-1],a[i-1]+a[i-2]);
//	}
//	else printf("n khong du dieu kien");
//	return 0;
//}
//***********************************************************************************
//In n so palindrome

//***********************************************************************************
//Cac so nguyen to nho hon n co tong chu so chia het cho 5
//#include<stdio.h> 
//#include<math.h>
//int main()
//{
//	int i,a,b,j,check,n;
//	printf("Nhap n = ");
//	scanf("%d", &n);
//	printf("\nCac so nguyen to co tong chu so chia het cho 5: ");
//	for(i=1; i<n; i++){
//	check=0; 
//	for(j=1; j<i/2; j++)
//	if(i%j==0) check++;
//	a=i;
//	b=0;
//	while(a!=0){
//		b=b+a%10;
//		a=a/10;
//		if(check==1&&b%5==0) printf("%5d",i);
//	}
//    }
//}
 
//********************************************************************************************
//Dem so luong fibonacci trong khoang [a,b]
//#include<stdio.h>
//long long f[100];
//int main(){
//	int a, b;
//	printf("Nhap a = ");
//	scanf("%d",&a);
//	printf("\nNhap b = ");
//	scanf("%d",&b);
//	int i,dem=0;
//	f[1]=1;
//	for(i=2;i<=50;i++)
//	{
//		f[i]=f[i-1]+f[i-2];
//		if(f[i]>=a && f[i]<=b) ++dem;
//	}
//	printf("\nSo luong so Fibonacci trong khoang [%d,%d] la %d",a,b,dem);
//	return 0;
//} 

//************************************************************************************************
//Ham tong hop check nt, f, am, fi, palindrome
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//
//int prime(int n) {
//    if(n<2) {
//        return 0;
//    }
//    int i;
//    for(i=2; i<n; ++i) {
//        if(n%i==0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int fibonacci(int n) {
//    if(n<0) {
//        return -1;
//    } else if(n==0 || n==1) {
//        return n;
//    } else {
//        return fibonacci(n-1) + fibonacci(n-2);
//    }
//}
//
//int palindrome(int so) {
//    int du, temp;
//    int tong = 0;
//    temp = so;
//    while(so>0) {
//        du = so%10;
//        tong = tong*10 + du;
//        so/=10;
//    }
//    if(temp!=tong) {
//        return 0;
//    }
//    return 1;
//}
//
//int demchuso(int n) {
//    int dem = 0;
//    while(n>0) {
//        n/=10;
//        dem++;
//    }
//    return dem;
//}
//
//int armstrong(int n) {
//    int mu = demchuso(n);
//    int coso;
//    int tong = 0;
//    int temp = n;
//    while(n>0) {
//        coso = n%10;
//        tong = tong + pow(coso, mu);
//        n = n/10;
//    }
//    if(temp==tong) {
//        return 1;
//    }
//    return 0;
//}
//
//int SumofDigit(int n) {
//    int sum = 0;
//    int i;
//    for(;n!=0;) {
//        i = n % 10;
//        sum += i;
//        n /= 10;
//    }
//    return sum;
//}
//
//int main() {
//    int chuongtrinh;
//    int k, n, p, q;
//    printf("Chon chuong trinh\n");
//    printf("1. Nhap n, in ra n so dau tien hoac cac so < n thoa man check\n");
//    printf("2. Nhap p, q, in ra p so thoa man < n, q so thoa man > n\n");
//    printf("3. Nhap n, in ra n so dau tien hoac cac so < n thoa man check, tong chu so chia het cho 5\n");
//    printf("4. Thoat chuong trinh\n");
//go_here:
//    scanf("%d", &chuongtrinh);
//    switch(chuongtrinh) {
//case 1:
//        printf("1. Check Prime\n");
//        printf("2. Check Fibonacci\n");
//        printf("3. Check Palindrome\n");
//        printf("4. Check Armstrong\n");
//go_here_1:
//        scanf("%d", &k);
//        switch(k) {
//            case 1:
//                printf("Nhap n = ");
//                scanf("%d", &n);
//                printf("%d so nguyen to dau tien la: ", n);
//                int stt1=1;
//                int i1=2;
//                while(stt1<=n){
//                    if(prime(i1)==1) {
//                        printf("%d ", i1);
//                        stt1++;
//                    }
//                    i1++;
//                }
//                printf("\nCac so nguyen to tu 1 den %d la: ", n);
//                for(int i1=2; i1<=n; ++i1) {
//                    if(prime(i1)==1) {
//                        printf("%d ", i1);
//                    }
//                }
//                break;
//            case 2:
//                printf("Nhap n = ");
//                scanf("%d", &n);
//                printf("%d so fibonacci dau tien la: ", n);
//                for(int i2=0; i2<n; i2++) {
//                    printf("%d ", fibonacci(i2));
//                }
//                printf("\nCac so fibonacci nho hon %d la: ", n);
//                int s1=0, s2=1, s3;
//                while(s1<n) {
//                    printf("%d ", s1);
//                    s3 = s1 + s2;
//                    s1 = s2;
//                    s2 = s3;
//                }
//                break;
//            case 3:
//                printf("Nhap n = ");
//                scanf("%d", &n);
//                printf("%d so palindrome dau tien la: ", n);
//                int stt3 = 0;
//                int i3 = 0;
//                while(stt3<n) {
//                    if(palindrome(i3)==1) {
//                        printf("%d ", i3);
//                        stt3++;
//                    }
//                    i3++;
//                }
//                printf("\nCac so palindrome nho hon %d la: ", n);
//                for(int i3=0; i3<=n; i3++) {
//                    if(palindrome(i3)==1) {
//                        printf("%d ", i3);
//                    }
//                }
//                break;
//            case 4:
//                printf("Nhap n = ");
//                scanf("%d", &n);
//                printf("%d so armstrong dau tien la: ", n);
//                int stt4 = 0;
//                int i4 = 0;
//                while(stt4<n) {
//                    if(armstrong(i4)==1) {
//                        printf("%d ", i4);
//                        stt4++;
//                    }
//                    i4++;
//                }
//                printf("\nCac so armstrong nho hon %d la: ", n);
//                for(int i4=0; i4<n; i4++) {
//                    if(armstrong(i4)==1) {
//                        printf("%d ", i4);
//                    }
//                }
//                break;
//            default:
//                printf("Chuong trinh khong kha dung, moi chon lai!\n");
//                goto go_here_1;
//            }
//            break;
//case 2:
//        printf("1. Check Prime\n");
//        printf("2. Check Fibonacci\n");
//        printf("3. Check Palindrome\n");
//        printf("4. Check Armstrong\n");
//go_here_2:
//        scanf("%d", &k);
//        switch(k) {
//            case 1:
//                printf("Nhap n = ");
//                scanf("%d", &n);
//                printf("Nhap p, q = ");
//                scanf("%d%d", &p, &q);
//                int i1 = 2;
//                printf("%d so nguyen to nho hon %d la: ", p, n);
//                while(p>0) {
//                    if(prime(i1)==1 && i1<n) {
//                        printf("%d ", i1);
//                        p--;
//                    }
//                    i1++;
//                }
//                printf("\n%d so nguyen to lon hon %d la: ", q, n);
//                while(q>0) {
//                    if(prime(i1)==1 && i1>n) {
//                        printf("%d ", i1);
//                        q--;
//                    }
//                    i1++;
//                }
//                break;
//            case 2:
//                printf("Nhap n = ");
//                scanf("%d", &n);
//                printf("Nhap p, q = ");
//                scanf("%d%d", &p, &q);
//                int i2 = 0;
//                printf("%d so fibonacci nho hon %d la: ", p, n);
//                while(p>0) {
//                    if(fibonacci(i2)==1 && i2<n) {
//                        printf("%d ", i2);
//                        p--;
//                    }
//                    i2++;
//                }
//                printf("\n%d so fibonacci lon hon %d la: ", q, n);
//                while(q>0) {
//                    if(fibonacci(i2)==1 && i2>n) {
//                        printf("%d ", i2);
//                        q--;
//                    }
//                    i2++;
//                }
//                break;
//            case 3:
//                printf("Nhap n = ");
//                scanf("%d", &n);
//                printf("Nhap p, q = ");
//                scanf("%d%d", &p, &q);
//                int i3 = 0;
//                printf("%d so palindrome nho hon %d la: ", p, n);
//                while(p>0) {
//                    if(palindrome(i3)==1 && i3<n) {
//                        printf("%d ", i3);
//                        p--;
//                    }
//                    i3++;
//                }
//                printf("\n%d so palindrome lon hon %d la: ", q, n);
//                while(q>0) {
//                    if(palindrome(i3)==1 && i3>n) {
//                        printf("%d ", i3);
//                        q--;
//                    }
//                    i3++;
//                }
//                break;
//            case 4:
//                printf("Nhap n = ");
//                scanf("%d", &n);
//                printf("Nhap p, q = ");
//                scanf("%d%d", &p, &q);
//                int i4 = 0;
//                printf("%d so armstrong nho hon %d la: ", p, n);
//                while(p>0) {
//                    if(armstrong(i4)==1 && i4<n) {
//                        printf("%d ", i4);
//                        p--;
//                    }
//                    i4++;
//                }
//                printf("\n%d so armstrong lon hon %d la: ", q, n);
//                while(q>0) {
//                    if(armstrong(i4)==1 && i4>n) {
//                        printf("%d ", i4);
//                        q--;
//                    }
//                    i4++;
//                }
//                break;
//            default:
//                printf("Chuong trinh khong kha dung, moi chon lai!\n");
//                goto go_here_2;
//            }
//            break;
//case 3:
//        printf("1. Check Prime\n");
//        printf("2. Check Fibonacci\n");
//        printf("3. Check Palindrome\n");
//        printf("4. Check Armstrong\n");
//go_here_3:
//        scanf("%d", &k);
//        switch(k) {
//            case 1:
//                printf("Nhap n = ");
//                scanf("%d", &n);
//                int stt1=1;
//                int i1=2;
//                printf("%d so nguyen to dau tien co tong chu so chia het cho 5 la: ", n);
//                while(stt1<=n){
//                    if(prime(i1)==1 && SumofDigit(i1)%5==0) {
//                        printf("%d ", i1);
//                        stt1++;
//                    }
//                    i1++;
//                }
//                printf("\nCac so nguyen to nho hon %d va tong chu so chia het cho 5 la: ", n);
//                for(int i1=2; i1<=n; ++i1) {
//                    if(prime(i1)==1 && SumofDigit(i1)%5==0) {
//                        printf("%d ", i1);
//                    }
//                }
//                break;
//            case 2:
//                printf("Nhap n = ");
//                scanf("%d", &n);
//                printf("%d so fibonacci dau tien co tong chu so chia het cho 5 la: ", n);
//                int i2 = 0;
//                int stt2 = 0;
//                while(stt2<n) {
//                    if(SumofDigit(i2)%5==0) {
//                        printf("%d ", fibonacci(i2));
//                        stt2++;
//                    }
//                    i2++;
//                }
//                printf("\nCac so fibonacci nho hon %d co tong chu so chia het cho 5 la: ", n);
//                int s1=0, s2=1, s3;
//                while(s1<n) {
//                    s3 = s1 + s2;
//                    s1 = s2;
//                    s2 = s3;
//                    if(s1%5==0) {
//                        printf("%d ", s1);
//                    }
//                }
//                break;
//            case 3:
//                printf("Nhap n = ");
//                scanf("%d", &n);
//                printf("%d so palindrome dau tien co tong chu so chia het cho 5 la: ", n);
//                int stt3 = 0;
//                int i3 = 0;
//                while(stt3<n) {
//                    if(palindrome(i3)==1 && SumofDigit(i3)%5==0) {
//                        printf("%d ", i3);
//                        stt3++;
//                    }
//                    i3++;
//                }
//                printf("\nCac so palindrome nho hon %d co tong chu so chia het cho 5 la: ", n);
//                for(int i3=0; i3<=n; i3++) {
//                    if(palindrome(i3)==1 && SumofDigit(i3)%5==0) {
//                        printf("%d ", i3);
//                    }
//                }
//                break;
//            case 4:
//                printf("Nhap n = ");
//                scanf("%d", &n);
//                printf("%d so armstrong dau tien la: ", n);
//                int stt4 = 0;
//                int i4 = 0;
//                while(stt4<n) {
//                    if(armstrong(i4)==1 && SumofDigit(i4)%5==0) {
//                        printf("%d ", i4);
//                        stt4++;
//                    }
//                    i4++;
//                }
//                printf("\nCac so armstrong nho hon %d la: ", n);
//                for(int i4=0; i4<n; i4++) {
//                    if(armstrong(i4)==1 && SumofDigit(i4)%5==0) {
//                        printf("%d ", i4);
//                    }
//                }
//                break;
//            default:
//                printf("Chuong trinh khong kha dung, moi chon lai!\n");
//                goto go_here_3;
//            }
//            break;
//case 4:
//        exit(0);
//default:
//        printf("Chuong trinh khong kha dung, moi chon lai!\n");
//        goto go_here;
//    }
//} 
	  
//Nhap n, in ra n so vua la fibonacci vua la so nguyen to 
//#include <stdio.h>
//#include <math.h>
//
// int fibonacci(int n) {
//    if (n < 0) {
//        return -1;
//    } else if (n == 0 || n == 1) {
//        return n;
//    } else {
//        return fibonacci(n - 1) + fibonacci(n - 2);
//    }
//}
// 
//int isPrimeNumber(int n) {
//    if (n < 2) {
//        return 0;
//    }
//    int i;
//    int squareRoot = sqrt(n);
//    for (i = 2; i <= squareRoot; i++) {
//        if (n % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
// 
//int main() {
// int n;
//    printf("Nhap so nguyen duong = ");
//    scanf("%d", &n); 
//    printf("Cac so fibonacci nho hon %d va la so nguyen to: ", n);
//    int i = 0;
//    while (fibonacci(i) < n) {
//        int fi = fibonacci(i);
//        if (isPrimeNumber(fi)) {
//            printf("%d ", fi);
//        }
//        i++;
//    }
//}

//*********************************************************************************************************************
//******************************************CAC BAI TOAN VE HINH*******************************************************
//BT1: Ve hinh vuong dac
//#include<stdio.h>
//int main(){
//	int i,j,n;
//	printf("Nhap n=");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//BT2: Ve hinh vuong rong
//#include<stdio.h>
//int main(){
//	int i,j,n;
//	printf("Nhap n=");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			if(i==0||j==0||i==n-1||j==n-1) printf(" *");
//			else printf(" ");
//		}
//		printf("\n");
//	}
//}

//BT3: Ve hinh tam giac dac
//#include<stdio.h>
//int main(){
//	int i,j,n;
//	printf("Nhap n=");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			if(i>=j) printf(" *");
//		}
//		printf("\n");
//	}
//}

//BT4: Ve tam giac dac cac goc khac nhau
//#include<stdio.h>
//int main(){
//	int i,j,n;
//	printf("Nhap n=");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
////			printf("%c",i<=j?'*':' ');
////			printf("%c",i>=j?'*':' ');
////			printf("%c",i+j<=n-1?'*':' ');
////			printf("%c",i+j>=n-1?'*':' ');
//		}
//		printf("\n");
//	}
//}

//BT5: Ve hinh tam giac rong
//#include<stdio.h>
//int main(){
//	int i,j,n;
//	printf("Nhap n=");
//	scanf("%d",&n);
//	for (i=0;i<n;i++){
//		for (j=0;j<n;j++){
//			if (i==0) printf("*");
//			else if (i==j||j==n-1) printf("*");
////			else if (i==j) printf(" *"); hinh tam giac ho
//			else printf(" ");
//		}
//		printf("\n");
//	}
//}

//BT6: Tam giac pascal
//#include<stdio.h>
//int a[100],b[100];
//int main(){
//	int n;
//	printf("Nhap n=");
//	scanf("%d",&n);
//	int i,j;
//	a[1]=1;
//	printf("  1\n");
//	for(i=2;i<=n;i++){
//		for(j=1;j<=i;j++) b[j]=a[j]+a[j-1];
//		for(j=1;j<=i;j++){
//			printf(" %2d",b[j]);
//			a[j]=b[j];
//		}
//		printf("\n");
//		}
//	}

//BT7: Tam giac dac bang so 1 // quay 4 goc
//#include<stdio.h>
//int n,i,j;
//int main(){
//	printf("Nhap n=");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			if(i+j<n) printf("%d",n-i);
//			else printf(" ");
//		}
//		printf("\n");
//	} 
//}

//BT8: Tam giac fibonacci
//#include<stdio.h>  
//
//int main()  
//{  
//    int a=0,b=1,i,c,n,j;  
//     
//    printf("Nhap pham vi: ");  
//    scanf("%d",&n);  
//    for(i=1;i<=n;i++)  
//    {  
//        a=0;  
//        b=1;  
//        printf("%d\t",b);  
//        for(j=1;j<i;j++)  
//        {  
//            c=a+b;  
//            printf("%d\t",c);  
//            a=b;  
//            b=c;  
//  
//        }  
//        printf("\n");  
//    }
//}

//BT9: Tam giac tu 1->n
//#include<stdio.h>
//#include<conio.h>
//int main(){
//	int i,j,k,l,n;
//	printf("Nhap n=");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++){
//		for (j=1;j<=n-i;j++) printf(" ");
//		for (k=1;k<=i;k++) printf("%d",k);
//		for (l=i-1;l>=1;l--) printf("%d",l);
//		printf("\n");
//		
//	}
//}

//BT10: Hinh chu nhat co 2 duong cheo
//#include<stdio.h>
//int main(){
//	int n,i;
//	printf("Nhap n=");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++){
//		int j;
//		for (j=1;j<=n;j++)
//		if (i==1||i==n||j==1||j==n-i+1||j==i||j==n)
//		printf("*");
//		else printf(" ");
//		printf("\n");
//	}
//}

//BT11: Ve tam giac chu
//#include<stdio.h>
//#include<conio.h>
//int main(){
//	int kytu=65;
//	int i,j,k,m;
//	int n;
//	printf("Nhap n=");
//	scanf("%d",&n);
//	for (i=1;i<=n;i++){
//		for (j=n;j>=i;j--)
//		printf(" ");
//		for (k=1;k<=i;k++)
//		printf("%c", kytu++);
//		kytu--;
//		for (m=1;m<i;m++);
//		printf("%c",--kytu);
//		printf("\n");
//		kytu=65; 
//	}
//	getch();
//}

//****************************************************************Mang Array************************************************************
//BT1: Tim max min trong mang va vi tri cua no
//#include<stdio.h>
//void nhap(int a[], int n)
//
//{
//
//    for (int i = 0; i < n; i++)
//
//    {
//
//        printf("Nhap vao phan tu a[%d]: ", i);
//
//        scanf("%d", &a[i]);
//
//    }
//
//}
//
//int max(int a[], int n)
//
//{
//
//    int max = a[0];
//
//    for (int i = 1; i < n; i++)
//
//        if (max < a[i])
//
//            max = a[i];
//
//    return max;
//
//}
//
//
//int min(int a[], int n)
//
//{
//
//    int min = a[0];
//
//    for (int i = 1; i < n; i++)
//
//        if (min > a[i])
//
//            min = a[i];
//
//    return min;
//
//}
//
//int main()
//
//{
//
//    int a[1000];
//
//    int n;
//
//    printf("Nhap n = ");
//
//    scanf("%d", &n);
//
//    nhap(a, n);
//
//    printf("\nMax = %d", max(a, n));
//
//    printf("\nMin = %d", min(a, n));
//
//    return 0;
//
//}

//BT2: Tim tong hoac trung binh cong cua cac vi tri trong mang
//#include<stdio.h>
//#include<conio.h>
//void nhap(int a[], int n)
//
//{
//
//    for (int i = 0; i < n; i++)
//
//    {
//
//        printf("Nhap vao phan tu a[%d]: ", i);
//
//        scanf("%d", &a[i]);
//
//    }
//
//}
//
//long int S(int a[], int n){
//    long int temp = 0;
//    for(int i = 0; i<n; i++)
//        temp+=a[i];
//    return temp;
//}
//
//int main()
//
//{
//
//    int a[1000];
//
//    int n;
//
//    printf("Nhap n = ");
//
//    scanf("%d", &n);
//
//    nhap(a, n);
//    printf("\nTong mang = %d",S(a,n));
//    getch();
//}

//BT3: Tinh tong cac phan tu chan trong mang
//#include <stdio.h>
//
//const int MAX_SIZE = 100;  
//void NhapMang(int a[], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        printf("a[%d] = ", i);
//        scanf("%d", &a[i]);
//    }
//}
// 
//void XuatMang(int a[], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        printf("%5d", a[i]);
//    }
//}
//
//int SumEven(int a[], int n)
//{
//    int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (a[i] % 2 != 0)
//        //if(i % 2 == 0) 
//        {
//            continue;
//        }
//        sum += a[i];
//    }
//    return sum;
//}
// 
//int main()
//{
//    int arr[MAX_SIZE];
// 
//    int n;
//	do
//    {
//        printf("Nhap n = ");
//        scanf("%d", &n);
//    } while (n <= 0 || n > MAX_SIZE);
//
//    NhapMang(arr, n);
// 
//    XuatMang(arr, n);
// 
//    printf("\nTong so chan = %d", SumEven(arr, n));
//} 

//Sap xep trong mang 
//Selection sort
//#include<stdio.h>
//int main(){
//	int n,a[n],i,j,min,max,temp;
//	printf("nhap n: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("nhap a[%d]: ", i);
//		scanf("%d",&a[i]);
//	} 
//	for(i=0;i<n-1;i++){
//		min=i;
//		for(j=i+1;j<n;j++){
//			if(a[j]<a[min]) min=j;
//		}
//		temp=a[i];
//		a[i]=a[min];
//		a[min]=temp;	
//	}
//	for(i=0;i<n-1;i++){
//		max=i;
//		for(j=i+1;j<n;j++){
//			if(a[j]>a[max]) max=j;
//		}
//		temp=a[i];
//		a[i]=a[max];
//		a[max]=temp;
//	}
//	printf("Sap xep: ");
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//} 

//Intercharge
//#include<stdio.h>
//int main(){
//	int n,a[n],i,j,temp; 
//	printf("nhap n: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("nhap a[%d]: ", i);
//		scanf("%d",&a[i]);
//	} 
//	for (int i = 0; i < n-1; i++)
//      for (int j = i+1; j < n; j++)
//         if (a[i] > a[j])
//         {
//            int temp = a[i];
//            a[i] = a[j];
//            a[j] = temp;
//         }
//         
//	printf("Sap xep: ");
//	for(i=0;i<n;i++) printf("%d ",a[i]);
//} 

//Intercharge vi tri chan
//#include<stdio.h>
//int main(){
//	int n,a[n],i,j,temp,b,e; 
//	printf("nhap n: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("nhap a[%d]: ", i);
//		scanf("%d",&a[i]);
//	} 
//	b=0; e=n; 
//	for (int i = b; i < e-1; i++)
//      for (int j = i+1; j < e; j++)
//         if (i%2==0 && j%2==0 && a[i] > a[j]) //vi tri chan
//         if (a[i]%2==0 && a[j]%2==0 && a[i] > a[j]) //gia tri chan
//         {
//            int temp = a[i];
//            a[i] = a[j];
//            a[j] = temp;
//         }
//	printf("Sap xep: ");
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}

//Intercharge thay doi cac so o vi tri b den e
//#include<stdio.h>
//int main(){
//	int n,a[n],i,j,temp,b,e; 
//	printf("nhap n: ");
//	scanf("%d",&n);
//	printf("nhap b: ");
//	scanf("%d",&b);
//	printf("nhap e: ");
//	scanf("%d",&e);
//	for(i=0;i<n;i++){
//		printf("nhap a[%d]: ", i);
//		scanf("%d",&a[i]);
//	} 
////	b=0; e=; //so cu the
//	for (int i = b; i < e-1; i++)
//      for (int j = i+1; j < e; j++)
//         if (a[i] > a[j])
//         {
//            int temp = a[i];
//            a[i] = a[j];
//            a[j] = temp;
//         }
//         
//	printf("Sap xep: ");
//	for(i=0;i<n;i++) printf("%d ",a[i]);
//}  

//Intercharge In ra va sap xep cac phan tu chan
//#include<stdio.h>
//#include<math.h>
//int main(){
//	int n,a[100],i,j,temp; 
//	printf("nhap n: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("nhap a[%d]: ", i);
//		scanf("%d",&a[i]);
//	} 
//	for (int i = 0; i < n - 1; i++){
//      for (int j = i + 1; j < n; j++){
//         if (a[i]%2==0 && a[j]%2==0 && a[i] > a[j]) //gia tri chan
//         {
//            int temp = a[i];
//            a[i] = a[j];
//            a[j] = temp;
//         }
//    }
//}
//	printf("Sap xep: ");
//	for(i=0;i<n;i++){
//		if(a[i]%2==0){
//		printf("%d ",a[i]);
//	}
//}
//}

//Intercharge gia tri chan tang dan, gia tri le giam dan
//#include<stdio.h>
//#include<math.h>
//int main(){
//	int n,a[100],i,j,temp; 
//	printf("nhap n: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("nhap a[%d]: ", i);
//		scanf("%d",&a[i]);
//	} 
//	for (int i = 0; i < n - 1; i++){
//      for (int j = i + 1; j < n; j++){
//         if (a[i]%2==0 && a[j]%2==0 && a[i] > a[j]) //gia tri chan
//         {
//            int temp = a[i];
//            a[i] = a[j];
//            a[j] = temp;
//         }
//         if (a[i]%2!=0 && a[j]%2!=0 && a[i] < a[j])
//         {
//            int temp = a[i];
//            a[i] = a[j];
//            a[j] = temp;
//         }
//    }
//}
//	printf("Sap xep: ");
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}

//Intercharge vi tri chan tang dan, vi tri le giam dan
//#include<stdio.h>
//#include<math.h>
//int main(){
//	int n,a[100],i,j,temp; 
//	printf("nhap n: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("nhap a[%d]: ", i);
//		scanf("%d",&a[i]);
//	} 
//	for (int i = 0; i < n - 1; i++){
//      for (int j = i + 1; j < n; j++){
//         if (i%2==0 && j%2==0 && a[i] > a[j]) //gia tri chan
//         {
//            int temp = a[i];
//            a[i] = a[j];
//            a[j] = temp;
//         }
//         if (i%2!=0 && j%2!=0 && a[i] < a[j])
//         {
//            int temp = a[i];
//            a[i] = a[j];
//            a[j] = temp;
//         }
//    }
//}
//	printf("Sap xep: ");
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}

//Intercharge so nguyen to
//#include<stdio.h>
//#include<math.h>
//int checkPrime(int n){
//	int i;
//	if (n < 2) return 0;
//	for(i = 2;i<=n/2;i++){
//		if(n%i==0) return 0;
//	}
//	return 1;
//}
//int main(){
//	int n,a[100],i,j,temp; 
//	printf("nhap n: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("nhap a[%d]: ", i);
//		scanf("%d",&a[i]);
//	} 
//	for (int i = 0; i < n - 1; i++){
//      for (int j = i + 1; j < n; j++){
//         if (checkPrime(a[i])==1 && checkPrime(a[j])==1 && a[i] > a[j]) 
//         {
//            int temp = a[i];
//            a[i] = a[j];
//            a[j] = temp;
//         }
//    }
//}
//	printf("Sap xep: ");
//	for(i=0;i<n;i++){
//		if(checkPrime(a[i])==1) //chi in so chan
//		printf("%5d ",a[i]);
//	}
//} 

//Bubble sort
//#include<stdio.h>
//#include<math.h>
//int main(){
//	int n,a[n],i,j,temp,swap; 
//	printf("nhap n: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("nhap a[%d]: ", i);
//		scanf("%d",&a[i]);
//	} 
//		for (int i = 0; i < n - 1; i++){
//			swap=i;
//		for (int j = n - 1; j > i; j--){
//			if(a[j] < a[i]) swap=j;
//		}
//			temp=a[i];
//			a[i]=a[swap];
//			a[swap]=temp;
//	}
//		printf("Sap xep: ");
//		for(i=0;i<n;i++) printf("%d ",a[i]);
//} 

//Insertion sort
//#include<stdio.h>
//#include<math.h>
//int main(){
//	int n,a[n],i,pos,x; 
//	printf("nhap n: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("nhap a[%d]: ", i);
//		scanf("%d",&a[i]);
//	} 
//		for(int i = 1; i < n; i++){ 
//		x = a[i]; 
//		pos = i;
//		while(pos > 0 && x < a[pos-1]){
//			a[pos] = a[pos-1];
//			pos--;
//		}
//		a[pos] = x;
//	}
//		printf("Sap xep: ");
//		for(i=0;i<n;i++) printf("%d ",a[i]);
//}

//Thay so nguyen to bang 99
//#include<stdio.h>
//int checkPrime(int n){
//	int i;
//	if (n < 2) return 0;
//	for(i = 2;i<=n/2;i++){
//		if(n%i==0) return 0;
//	}
//	return 1;
//}
//int main(){
//	int n,a[100],i,j,temp; 
//	printf("nhap n: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("nhap a[%d]: ", i);
//		scanf("%d",&a[i]);
//	} 
//  printf("Day so ban dau la ");
//  for (int i = 0; i < n ; i++){
//       printf("%d ", a[i]); }
//	temp=99;
//	for (int i = 0; i < n ; i++){
//         if (checkPrime(a[i])==1) 
//         {
//            a[i] = temp;
//         }
//    }
//	printf("Day so sau khi thay: ");
//	for(i=0;i<n;i++){
//		if(i<n-1) 
//		printf("%d-",a[i]);
//		else printf("%d",a[i]);
//	}
//}   

//Dao vi tri 3 phan tu dau tien
//#include <stdio.h>
//int main(){
//	int n, a[1000],temp,i,j,b,e;
//	printf("So phan tu trong day n= ");
//	scanf("%d", &n);
//	b=0;
//	e=2;
//	for (i=0;i<n;i++){
//		printf("a[%d]= ", i);
//		scanf("%d", &a[i]);
//	}
//	for (i=0;i<e;i++){
//		for(j=i+1;j<e-i;j++){
//	temp=a[i]; 
//	a[i]=a[j+1];
//	a[j+1]=temp;
//
//	}
//	}
//	printf("3 so dau sau khi dao vi tri ");
//	for (i=0;i<n;i++){
//		if(i<e) printf("%d-",a[i]);
//		else printf("%d ",a[i]);
//	}
//}

//Sap xep 3 so chan cuoi theo thu tu tang dan
//#include<stdio.h>
//int main(){
//	int n,a[100],i,j,k; 
//	printf("nhap n: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("nhap a[%d]: ", i);
//		scanf("%d",&a[i]);
//	} 
//	
//	printf("Day so ban dau la ");
//  	for (int i = 0; i < n ; i++){
//       printf("%d ", a[i]); }
//	
//	int count = 0; 
//	for (i = n - 1; i >= 0; i--){
//		if(a[i]%2==0){
//		count++;
//		if (count==3){
//		 k=i; 
//		 break;
//		 }
//	}
//	}
//	
//	for (i = k; i < n-1; i++){
//      for (j = i+1; j < n; j++){
//         if (a[i]%2==0 && a[j]%2==0 && a[i] > a[j])
//         {
//            int temp = a[i];
//            a[i] = a[j];
//            a[j] = temp;	
//         }
//    }
//}
//printf("\nSap xep: ");
//		for(i=0;i<n;i++){
////		if(a[i]%2==0){
//		printf("%d ",a[i]);
//}
//}

//Thay the so nguyen to thu 2 tinh nguoc tu duoi len bang so binh phuong cua no
//#include<stdio.h>
//#include<math.h>
//int checkPrime(int n){
//	int i;
//	if (n < 2) return 0;
//	for(i = 2;i<=n/2;i++){
//		if(n%i==0) return 0;
//	}
//	return 1;
//}
//
//int main(){
//	int n,a[100],i,k; 
//	printf("nhap n: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("nhap a[%d]: ", i);
//		scanf("%d",&a[i]);
//	} 
//	
//	printf("Day so ban dau la ");
//  	for (int i = 0; i < n ; i++){
//       printf("%d ", a[i]); }
//	
//	int count = 0; 
//	for (i = n - 1; i >= 0; i--){
//		if(checkPrime(a[i])==1){
//		count++;
//		if (count==2){
//		 k=i; 
//		 break;
//		 }
//	}
//	}
//	
//	 a[k] = a[k]*a[k];
//	 
//printf("\nSap xep: ");
//		for(i=0;i<n;i++){
////		if(a[i]%2==0){
//		printf("%d ",a[i]);
//}
//}

//Thay the so cach 3 vi tri so nguyen to thu 2 tinh nguoc tu duoi len bang so binh phuong cua no
//#include<stdio.h>
//#include<math.h>
//int checkPrime(int n){
//	int i;
//	if (n < 2) return 0;
//	for(i = 2;i<=n/2;i++){
//		if(n%i==0) return 0;
//	}
//	return 1;
//}
//
//int main(){
//	int n,a[100],i,k,p,index; 
//	printf("nhap n: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("nhap a[%d]: ", i);
//		scanf("%d",&a[i]);
//	} 
//	
//	printf("Day so ban dau la ");
//  	for (int i = 0; i < n ; i++){
//       printf("%d ", a[i]); }
//	
//	int count = 0; k=-3; p=2; 
//	for (i = n - 1; i >= 0; i--){
//		if(checkPrime(a[i])==1){
//		count++;
//		if (count==p){ index = i; break;} 
//	}
//	}
//	
//	for (i=0;i<n;i++){
//		if(i==index + k){
//		a[i]=a[i]*a[i]; 
//	} 
//}
//
//	 
//printf("\nSap xep: ");
//		for(i=0;i<n;i++){
//		printf("%d ",a[i]);
//}
//}

//Chen so 99 vao vi tri co chi so index bat ki
//#include<stdio.h>
//#include<conio.h>
//int main(){
//	int n,a[100],i,index=5; 
//	printf("nhap n: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("nhap a[%d]: ", i);
//		scanf("%d",&a[i]);
//	} 
//	
//	printf("Day so ban dau la ");
//  	for (int i = 0; i < n ; i++){
//       printf("%d ", a[i]); }
//
// 	for(i=n-1;i>=index;i--){
// 	a[i+1]=a[i];
// 	}
// 	a[index]=99;
// 	n=n+1;       
//       
// 	printf("\nSap xep: ");
//		for(i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}
 
//Chen so 99 vao dang truoc 2 don vi doi voi phan tu thu 3 la so chan
//#include<stdio.h>
//#include<conio.h>
//int check(int n){
//	if (n%2==0) return 1;
//	else return 0; 
//}
//
//int main(){
//	int n,a[100],i,index,k,p; 
//	printf("nhap n: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("nhap a[%d]: ", i);
//		scanf("%d",&a[i]);
//	} 
//	
//	printf("Day so ban dau la ");
//  	for (int i = 0; i < n ; i++){
//       printf("%d ", a[i]); }
//	
//	int count = 0; k=-2; p=3; 
//	for (i = n - 1; i >= 0; i--){
//		if(check(a[i])==1){
//		count++;
//		if (count==p){ index = i; break; }
//		index=index+k;
//		}
//	}
//	
// 	for(i=n-1;i>=index;i--){
// 	a[i+1]=a[i];
// 	}
// 	a[index]=99;
// 	n=n+1;       
//       
// 	printf("\nSap xep: ");
//		for(i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}
//code loi 

//Nhap n phan tu, xoa 3 phan tu snt dau tien
//#include <stdio.h>
//#include <math.h>
//int checkPrime(int n)
//{
//	int i;
//	if (n<2) return 0;
//	for(i =2 ; i<=n/2 ; i++)
//	{
//		if(n%i==0)
//		return 0;
//	}
//	    return 1;
//}
//int main()
//{
//
//    int a[100], n, i,k,p,j;
//    
//    printf("INPUT N = ");
//    scanf("%d", &n);
//    for(i=0; i< n; i++)
//    {
//    printf("a[%d]= ",i);
//    scanf("%d",&a[i]);
//}
//	printf("\nARRAY BEFORE CHANGE : \n");
//    for(i=0; i< n; i++){
//    	printf("%d ", a[i]);
//	}
//    
//	k=0, p=1;
// 	 for(p=1;p<=3;p++){
//	 for(i=0; i<n; i++){
//		if(checkPrime(a[i])==1){
//		for(j=1;j<=n-1;j++){
//		a[j]=a[j+1];
//	}
//	n--;
//	break;
//}
//}
//}
//
//	printf("\nARRAY AFTER CHANGE : \n");
//	for(i=0; i<n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	
//	return 0;
//} 
//code loi
	
//Xoa phan tu co chi so thu 5 a5
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//
//    int a[100], n, i,count=0,temp,deleteArr;
//    
//    printf("INPUT N = ");
//    scanf("%d", &n);
//    
//   
//    
//    for(i=0; i< n; i++)
//    {
//    printf("a[%d]= ",i);
//    scanf("%d",&a[i]);
//}
//    
//    printf("\nARRAY BEFORE CHANGE : \n");
//    for(i=0; i< n; i++){
//    	printf("%d ", a[i]);
//	}
//    
//
// for(i=0; i<n; i++){
//	count++;
//	if (count==4){
//		for(a[i]=a[i];i<n;i++){
//		a[i]=a[i+1];
//	}
//	}
//	
//	
//			
//		
//		
//}
//
//			printf("\n\nARRAY AFTER CHANGE : \n");
//	for(i=0; i<n-1; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	
//	return 0;
//}

//Thay phan tu chan thu 3 bang 100
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int a[100], n, i,count=0,temp,deleteArr;
//    
//    printf("INPUT N = ");
//    scanf("%d", &n);
//    
//   
//    
//    for(i=0; i< n; i++)
//    {
//    printf("a[%d]= ",i);
//    scanf("%d",&a[i]);
//}
//    
//    printf("\nARRAY BEFORE CHANGE : \n");
//    for(i=0; i< n; i++){
//    	printf("%d ", a[i]);
//	}
//    
//
// for(i=0; i<n; i++){
// 	if(a[i]%2==0){
//	count++;
//	if (count==3){
//		a[i]=100;
//	}
//	}
//	
//	
//			
//		
//		
//}
//
//			printf("\n\nARRAY AFTER CHANGE : \n");
//	for(i=0; i<n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	
//	return 0;
//} 


//Bt thi thu
//#include<stdio.h>
//int main(){
//	int a,b;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	printf("OUTPUT: \n");
//	if (a>=b) printf("a>=b");
//	else printf("a<b");
//}

//BT thi thu 4
//#include<stdio.h>
//int main(){
//	int a[7],i,j,min,max,temp;
//]]
//	for(i=0;i<n;i++){
//		printf("nhap a[%d]: ", i);
//		scanf("\n%d",&a[i]);
//	} 
//	for(i=0;i<n-1;i++){
//		min=i;
//		for(j=i+1;j<n;j++){
//			if(a[j]<a[min]) min=j;
//		}
//		temp=a[i];
//		a[i]=a[min];
//		a[min]=temp;	
//	}
//	for(i=0;i<n-1;i++){
//		max=i;
//		for(j=i+1;j<n;j++){
//			if(a[j]>a[max]) max=j;
//		}
//		temp=a[i];
//		a[i]=a[max];
//		a[max]=temp;
//	}
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//} 


