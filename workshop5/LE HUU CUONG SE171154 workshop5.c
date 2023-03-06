//Program1
/*

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Get a random integer between min and max randomly
int getRandom(int min, int max);

int main() {


	int total, x, y, count;
	srand((unsigned int)time(NULL)); //d? m?i l?n ch?y d?u random s? khác nhau

	do {
		printf("You are required to input total here: ");
		scanf("%d", &total);
	} while (total < 2 || total > 12);

	count = 1;

	do {
		x = getRandom(1, 6);
		y = getRandom(1, 6);
		printf("Result of throw %d \"%d + %d\"\n", count, x, y);
		count++;
	} while (x + y != total);

	printf("You got your total in %d throws", count - 1);

	return 0;
}

int getRandom(int min, int max) {
	return min + (int)(rand() * (max - min + 1.0)/(1.0 + RAND_MAX));
}

*/

//Program2
/*

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Get a random integer between min and max randomly
int getRandom(int min, int max);

int main() {


	int total, x, y, count;
	srand((unsigned int)time(NULL)); //d? m?i l?n ch?y d?u random s? khác nhau

	do {
		printf("You are required to input total here: ");
		scanf("%d", &total);
	} while (total < 2 || total > 20);

	count = 1;

	do {
		x = getRandom(1, 10);
		y = getRandom(1, 10);
		if ( x == y )
			y = getRandom(1, 10);
		else
			printf("Result of picks %d and %d: %d + %d\n", count++, count, x, y);
	
	
		count++;
		
	} while (x + y != total);

	printf("You got your total in %d picks!!", count - 1);

	return 0;
}

int getRandom(int min, int max) {
	return min + (int)(rand() * (max - min + 1.0)/(1.0 + RAND_MAX));
}

*/

//Program3
/*
#include <stdio.h>
#include <stdlib.h>

//Write a C program using the following simple menu:
//1- Processing date data
//2- Character data
//3- Quit
//Choose an operation:
//-	When user chooses 1: User will enter values of date, month, year then the program will announce whether this date is valid or not.
//-	-When user chooses 2: User will enter two characters, then the program will print out ASCII codes of characters between them using descending order. Examples:     Input: ca
//           Output:
//           c: 99, 63h
//           b: 98, 62h
//           a: 97, 61h

void checkValidDay ();
void checkCharacter ();



int main(int argc, char *argv[]) {

	int choice;
	int t = 0;
	do {
		printf("\n==============================================================================================\n");
		printf("Welcome to our menu\n");
		printf("1. Check the day is valid or not\n");
		printf("2. Enter 2 characters then the program will print out ASCII codes of characters between them\n");
		printf("3. Quit\n");

		printf("\nInput your choice: ");
		scanf("%d", &choice);


		if (choice == 1)
			checkValidDay ();
		else if (choice == 2)
			checkCharacter ();
		else if (choice == 3)
			break;



	} while (t =! 0 );

		return 0;
}



void checkValidDay () {
	int d, m, y;

	printf("Enter the day: ");
	scanf("%d", &d);
	printf("Enter the month: ");
	scanf("%d", &m);
	printf("Enter the year: ");
	scanf("%d", &y);
	if (valid(d, m, y)==1)
		printf("The date of %d/%d/%d is a valid date!\n", d, m,y);
	else
		printf("The date of %d/%d/%d is not a valid date!\n", d, m,y);

}


int valid(int d, int m, int y) {
	int c;
	int dmax;
	if (d < 1 || d > 31 || m < 1 || m > 12) {
		c = 0;
	} else {


		// set day max;
		if (m == 4 || m == 6 || m == 9 || m == 11) {
			dmax = 30;
		} else if (m == 2) {
			if (leapyear(y)==1) {
				dmax = 29;
			} else {
				dmax = 28;
			}
		} else {
			dmax = 31;
		}

		// checking;
		if (d > dmax) {
			c = 0;
		} else {
			c = 1;
		}
	}
	return c;
}

int leapyear(int y) {
	if ((y%400 == 0) || ( (y%4 == 0) && (y%100 != 0))) {
		return 1;
	} else {
		return 0;
	}
}


void checkCharacter () {
	char c1, c2, t;
	int d;
	printf("Nhap c1: ");
	scanf(" %c", &c1);
	printf("Nhap c2: ");
	scanf(" %c", &c2);
	if(c1 > c2) {
		t = c1;
		c1 = c2;
		c2 = t;
	}
	d = c2 - c1;
	printf("%d\n", d);

	for(char c = c1; c <= c2; c++) {
		printf("%c: %d, %X h\n", c, c, c);
	}
}


*/

//Program4
/* 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void QuadraticEqu(double a, double b, double c);
void BankDep(double d, double r, int y);

int main(int argc, char** argv) {

    int m;
    double a,b,c;
    double d, r;
    int y;
    do 
    {
        printf("Menu to choose: \n");
        printf("1 - Quadratic equation.\n");
        printf("2 - Bank deposit problem.\n");
        printf("3 - Quit.\n");
        scanf("%d", &m);
        switch (m)
        {
            case 1:
                printf("\tA Quadratic equation: ax^2 + bx + c = 0 (x: variable)\n");
                printf("\tEnter a: "); scanf("%lf", &a);
                printf("\tEnter b: "); scanf("%lf", &b);
                printf("\tEnter c: "); scanf("%lf", &c);
                QuadraticEqu(a, b, c);
                break;

            case 2:
                // Nh?p & ki?m tra deposit
                do
                {
                    printf("\tEnter your deposit (VND): ");
                    scanf("%lf", &d);
                } while (d <= 0);
               
                //Nh?p & ki?m tra yearly rate
                do
                {
                    printf("\tEnter yearly rate (0.0 to 1.0): ");
                    scanf("%lf", &r);
                } while (r<=0 || r>=1);
                
                // Nh?p & ki?m tra year
                do
                {
                    printf("\tEnter year(s): ");
                    scanf("%d", &y);
                } while (y <= 0);
                
                BankDep(d, r, y);
                break;
        }
    } while (m>0 && m<3);
                
            
    return (EXIT_SUCCESS);
}

void QuadraticEqu(double a, double b, double c)
{
    double d;
    d = b*b - 4*a*c;
    printf("\tQuadratic equation: %.2lfx^2 + %.2lfx + %.2lf = 0\n", a, b, c);
    if (d < 0)
    {
        printf("NO SOLUTION!\n");
    }
    else if (d == 0)
    {
        printf("ONE SOLUTION: x = %.2lf\n", -b/(2*a));
    }
    else
    {
        d = sqrt(d);
        printf("TWO SOLUTIONS:\n");
        printf("\tx1 = %.2lf\n\tx2 = %.2lf\n", (-b-d)/(2*a), (-b+d)/(2*a));
    }
}

void BankDep(double d, double r, int y)
{
    double money;
    printf("You deposit %.2lf for %d year(s) at the rate of %.2lf/year.\n", d, y, r);
    money = d * (pow(1+r, y));
    printf("The money you will receive at the end: %.2lf\n", money);
}

*/


