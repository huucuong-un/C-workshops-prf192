#include <stdio.h>

int main() {
	int n[7], t;
	for (int i = 0; i < 7; i++) {	
		scanf("%d", &n[i]);
	}
	
	
	printf("The array after sorting ");
	for (int i = 0; i < 7 - 1; i++) {
		for ( int j = i + 1; j < 7; j++) {
			if (n[i] > n[j]) {
				t = n[i];
				n[i] = n[j];
				n[j] = t;
			}
		}
	}
	for (int i = 0; i < 7; i++)
		printf("%d ", *(n + i));
	
	
	
	return 0;
}