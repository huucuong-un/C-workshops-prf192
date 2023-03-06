#include <stdio.h>
#include <string.h>

// them ben mang so nguyen
void add(int a[], int &n , int vitrithem , int phantuthem)
	{ for (int i=n-1; i>=vitrithem ; i--)
	 	{ a[i+1]=a[i];	 	
		 }
		 a[vitrithem]= phantuthem;
		 n++;
}
// xoa phan tu trong mang
void remove(int a[], int &n , int k)
	{ if (k==-1) return;
	for (int i=k;i<n-1;i++){
		a[i]=a[i+1];}
		n--;
		}
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
    int n,vtri,ptu, a[100];
    scanf("%d%d%d", &n, &vtri, &ptu);
    for (int i=0;i<n;i++) scanf("%d", &a[i]);
    remove(a,n,vtri);
    for(int i=0;i<n;i++) printf("%d ", a[i]);
	}

