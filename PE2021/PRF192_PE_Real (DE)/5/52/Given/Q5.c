#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n, a[n];

	scanf("%d", &n);
	
	for(int i = 0; i < n; i ++)	
		scanf("%d", &a[n]);








	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:

	for(int i = 0; i < n; i++)	{	
		if (a[i] % 2 != 0) {
			printf("Not enven array of %d elements", n);
			goto end;
		}
	}
	
	printf("Even array of %d elements", n);
	
end:








	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
