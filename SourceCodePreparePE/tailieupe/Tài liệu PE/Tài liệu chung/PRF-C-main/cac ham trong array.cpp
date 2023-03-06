#include <stdio.h>
#include <math.h>
#include <stdlib.h> 

void swap(int& x, int& y) {
	int tg = x;
	x = y;
	y = tg;
}

int IndexOf(int a[], int n, int x) {
	int i;
	for(i = 0; i < n; i++) {
		if(a[i] == x) return i;
	}
	return -1;
}

void RemoveAt(int a[], int& n, int k) {
	if(k == -1) return;
	int i;
	for(i = k; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	n--;
}

void InsertAt(int a[], int& n, int v, int k) {
	if(k < 0 || k > n) return;
	int i;
	for(i = n; i > k; i--) {
		a[i] = a[i - 1];
	}
	a[k] = v;
	n++;
}

int imax(int a[], int n) {
	int imax = 0, i;
	for(i = 1; i < n; i++) {
		if(a[i] > a[imax]) imax = i;
	}
	return imax;
}

void SelectionSort(int a[], int n) {
	int i, j;
	for(i = 0; i < n - 1; i++) {
		//tim min trong doan tu i + 1 den n - 1
		int imin = i + 1;
		for(j = i + 1; j < n; j++) {
			if(a[j] < a[imin]) imin = j;
		}
		if(a[i] > a[imin]) swap(a[i],a[imin]);
	}
}

void BubbleSort(int a[], int n) {
	int i, j;
	for(i = 0; i < n - 1; i++) {
		for(j = i + 1; j < n; j++) {
			if(a[i] > a[j]) swap(a[i],a[j]);
		}
	}
}
int main() {
	int a[] = {66, 20, 1, 0, 30, 77};
	int n = 6;
	int k;
	//k = imax(a,n);
	//remove all biggest number in a
	BubbleSort(a,n);
	//InsertAt(a,n,99,k+1);//66 30 25 77 99 8 77
	/*find min
	k = IndexOf(a,n,min);
	RemoveAt(a,n,k);
	*/
	//output a
	int i;
	for(i = 0; i < n; i++) {
		printf("%-5d",a[i]);
	}	
	printf("\n");
}
