#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char cc[7];
	int i, j, check1 = 0, check2 = 0, check3 = 0, pos;
	for(i = 0; i < 7; i++)
		scanf("%s", &cc[i]);
	for(i = 0; i < 7; i++)
	{
		if( cc[0] == cc[i] )
			check1 = check1 + 1;
		if(cc[0] != cc[i])
			if(check2 == 0)
			{
				pos = i;
				for(j = i; j < 7; j++)
				{
					if( (cc[i] == cc[j]) )
						check3 = check3 + 1;
				}
				check2 = 1;
			}			
	}
			
				
	  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%d %c\n", check1, cc[0]);
	printf("%d %c", check3, cc[pos]);
	







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
