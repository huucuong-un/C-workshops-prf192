#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	int n, p = 1;;
	do
		scanf("%d", &n);
  	while (n < 0);
  	
  	for (int i = 2; i <= (n / 2); i++  )
  		if(i % 2 == 0)	
  			p = p * i;
  
  
  
  
  // Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	printf("%d", p);
	





  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
