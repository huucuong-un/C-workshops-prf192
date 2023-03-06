#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//sum of digit
int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	int n, sum = 0, m;
	scanf("%d", &n);
	while(n > 0) {
		m = n % 10;
		sum = sum + m;
		n= n / 10;
	}











	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:

	printf("%d", sum);










	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
