#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//print sum of square even

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int sum = 0, e, n;
  int* a = (int*)malloc(sizeof(int)*n);
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
	scanf("%d", &a[i]);
  for (int i = 0; i < n; i++)
  	if (a[i] % 2 == 0) {
	  
		e = a[i] * a[i];
		sum = sum + e;
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
