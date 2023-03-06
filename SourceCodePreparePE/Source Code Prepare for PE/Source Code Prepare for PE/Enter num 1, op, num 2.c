#include <stdio.h>

int main(){
	double num1, num2;
	char op;
	double result;
		printf("Enter the number 1, op, number 2: ");
		scanf("%lf%c%lf", &num1, &op, &num2);
switch (op){
	case '+' :
		result = num1 + num2;
		printf("result = %lf", result);
		break;
	case '-' :
		result = num1 - num2;
		printf("result = %lf", result);
		break;
	case '*' :
		result = num1 * num2;
		printf("result = %lf", result);
		break;	
	case '/' :
		if(num2 == 0){
			printf("Divide by 0");
			}
   		else{
			result = num1 / num2;
			printf("result = %lf", result);
			}
			break;
		
		default : {
				printf("Op is not suported!");
				break;
		}
	}
	return 0;
}

