#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a[5], t;
	printf("Input your array:\n");
	for (int i = 0; i < 5; i++)	{
	
		scanf("%d", &a[i]);
		
	}
	printf("Your array now is:\n");
	for (int i = 0; i < 5; i++)	{
	
		printf("%d\n", a[i]);
	}
	
	for (int i = 0; i < 4; i++)
		for (int j = i + 1; j < 5; j++) {
			if (a[i] > a[j]) {
		
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			
			}
		}
		
  	
  	
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for (int i = 0; i < 5; i++)
  		if (a[i] % 2 != 0)
  			printf("%d\n", a[i]);
  			







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
