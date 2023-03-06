#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");

	int n;
	printf("Enter your integer n: ");
  	scanf("%d",&n);
  
  printf("\nOUTPUT:\n");
 
	int prod = 1;                        // khong lam thay doi gia tri phep nhan
	for(int i=2; i<=n/2; i++)	
	{
		if (i%2 == 0)	
		{
			prod = prod*i;
		}
	}
	printf("%d",prod);


  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
