/* Bai 1

#include<stdio.h>

int main(){
	double num1, num2, result;
	char op;
	scanf("%lf%c%lf", &num1, &op, &num2);
	switch (op){
		case '+' : result = num1 + num2;
		printf("%.2f + %.2f = %.2f", num1, num2, result);
		break;
		case '-' : result = num1 - num2;
		printf("%.2f - %.2f = %.2f", num1, num2, result);
		break;
		case '*' : result = num1 * num2;
		printf("%.2f x %.2f = %.2f", num1, num2, result);
		break;
		case '/' : if ( num2==0)
		printf("Divide by 0");
		else
 		result = num1 / num2;
		printf("%.2f : %.2f = %.2f", num1, num2, result);
		break;
		default: printf("Op is not supported");
	}
	return 0;
}
*/


/* Bai 2

#include<stdio.h>
int main(){
	int pa=9000000, pd=3600000;
	int tf, n;
	int income;
	int ti;
	printf("Enter number: ");
	scanf("%d", &n);
	tf = 12*(pa+n*pd);
	printf("Tax-free income : %d\n", tf);
	printf("Enter income :");
	scanf("%d", &income);
	ti=income-tf;
	if(ti<=0){
		printf("Taxable income :");
		printf("Income tax = 0");
		
	}
	if(ti>0)
		printf("Taxable income : %d\n", ti);
	if(0<ti && ti<=5000000)
		printf("Income tax : %lf", ti*0.05);
	if(5000001<=ti && ti<= 10000000)
		printf("Income tax : %lf", (5000000*0.05 + (ti - 5000000)*0.1));
	if(10000001<=ti && ti<=18000000)
		printf("Income tax : %lf", (5000000*0.05 + 5000000*0.1 + (ti - 10000000)*0.15));
	if(ti>18000000)
		printf("Income tax : %lf", (5000000*0.05 + 5000000*0.1 + 8000000*0.15 + (ti - 18000000)*0.2));
	return 0;
}

*/


/* Bai 3

#include<stdio.h>

int main(){
	int x, S=0;
	do{
		scanf("%d", &x);
		if(x!=0)
		S=S+x;
	}
	while (x!=0);
	printf("%d", S);
	return 0;
}
*/


/* Bai 4
#include<stdio.h>

int main(){
	int x, y;
	do{
		scanf("%d", &x);
		scanf("%d", &y);
		int t=x;
		x=y;
		y=t;
		printf("x= %d\n", x);
		printf("y= %d", y);
	}
	while(x!=0 && y!=0);
	return 0;
}
*/


/* Bai 5
#include<stdio.h>
#include<ctype.h>

int main(){
 	char ch;
 	int nVowels=0;
 	int nConsonants=0;
 	int nOthers=0;
	printf("nhap vao chuoi ky tu: ");
	
	do{
		ch=getchar();	
		ch=toupper(ch);
	if (ch>='A' && ch<='Z')
	{
	switch(ch){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': 
		nVowels++;
		break;
		default: nConsonants++;
	}
	} 
	else nOthers =nOthers++;
} while( ch!='\n');
 printf("So luong nguyen am (Vowels): %d\n",nVowels);
 printf("So luong phu am (Consonants): %d\n",nConsonants);
 printf("Phu am Khac: %d",nOthers);
 return 0;
 }
 */
 
 
 /* Bai 6
 #include<stdio.h>
 
 int main (){
  	int i=0;
	char code;
  	for (i=0;i<256;i++){
  		printf("%c : %d, %o, %X\n",code,code,code,code);
  		code+=1;
  	if (code!=0 && code%20==0)
	  getchar();	
	  }	
}
*/


/* Bai 7
#include<stdio.h>

int main(){
	char c1, c2, t;
	int d;
	printf("Nhap c1: ");
	scanf(" %c", &c1);
	printf("Nhap c2: ");
	scanf(" %c", &c2);
	if(c1>c2){
		t=c1;
		c1=c2;
		c2=t;
	}
	d=c2-c1;
	printf("%d\n", d);
	
	for(char c=c1; c<=c2; c++){
		printf("%c: %d, %o, %X\n", c, c, c, c);
	}
	return 0;
}
*/
