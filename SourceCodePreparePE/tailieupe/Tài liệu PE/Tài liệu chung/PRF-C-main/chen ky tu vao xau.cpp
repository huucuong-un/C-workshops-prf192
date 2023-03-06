#include <stdio.h>
#include <string.h>

/* them ben mang so nguyen
void add(int a[], int &n , int vitrithem , int phantuthem)
	{ for (int i=n-1; i>=vitrithem ; i--)
	 	{ a[i+1]=a[i];	 	
		 }
		 a[vitrithem]= phantuthem;
		 n++;
}*/
// them ky tu vao xau
void them(char s[] , int vitrithem , char kituthem)
	{ int n=strlen(s);
	for (int i=n-1; i>=vitrithem ; i--)
	 	{ s[i+1]=s[i];	 	
		 }
		 s[vitrithem]= kituthem;
		s[n+1] = '\0';
}  

int main(){
    char s[100];
    gets(s);
    for (int i=3;i<strlen(s);i+=4)    them(s , i , '-');
    printf("%s",s);
	}

