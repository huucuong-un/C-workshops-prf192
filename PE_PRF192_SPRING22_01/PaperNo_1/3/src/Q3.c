#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("cls");
  printf("\nTEST Q3 (2 marks):\n");
  int n, sum, i;
  printf("Enter n = "); scanf("%d",&n); 
  //============================================================
  
  // Write your statements here
  //......
    int flag = 1;
	
	for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
 
    if (n <= 1)
        flag = 0;
 
    if (flag == 1) {
        printf("Prime");
    }
    else {
        printf("Not prime");
    }
  
  
  
  //End your statements
  
  
  //====DO NOT ADD NEW OR CHANGE STATEMENTS AFTER THIS LINE====
  //==THE OUTPUT AFTER THIS LINE WILL BE USED TO MARK YOUR PROGRAM==
  printf("\nOUTPUT:\n");
  printf("%d",sum); 
  printf("\n");
  system ("pause");
  return(0);
}
