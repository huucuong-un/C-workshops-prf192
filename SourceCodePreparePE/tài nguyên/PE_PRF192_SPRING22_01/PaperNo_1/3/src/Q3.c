#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("cls");
  printf("\nTEST Q3 (2 marks):\n");
  int n,sum,i;
  printf("Enter n = "); scanf("%d",&n); 
  //============================================================
  
  // Write your statements here
  //......
  int j;
int kiemtrasonguyento(int n){
	if(n<=1) return 0;
	for( j=2; j<=sqrt(n); j++){
		if (n%j==0) return 0;
	}
	return 1;
}

do{
	
	}while(n<1); 
	for( i=2; i<=n; i++){
		if(kiemtrasonguyento(i)){
		sum += i;
		}
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
