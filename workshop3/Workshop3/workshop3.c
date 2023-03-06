//Program 1
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime(int n);

int main(int argc, char** argv) {

    int n;
    do {
        printf("\nEnter an integer (or 0 to stop): ");
        scanf("%d", &n);
        printf("Prime number between 2 and %d: \n", n);
        for (int i = 2; i<=n; i++){

            if (prime(i) == 1)
            {
                printf("%d\t", i);
            }
        }
    } while (n != 0);
    return (EXIT_SUCCESS);
}

int prime(int n)
{
    int m = sqrt(n);
    int i, c=1;
    if (n < 2)
    {
        c = 0;
    }

    else
    {
        for (i = 2; i <= m; i++)
        {
            if (n % i == 0)
            {
                c = 0;
                break;
            }
            else
            {
                c = 1;
            }
        }
    }
    return c;
}
*/


//Program2

/*
#include <stdio.h>
#include <stdlib.h>

int valid(int d, int m, int y);
int leapyear(int y);

int main(int argc, char** argv) {

    int d, m, y;
    int t;
    do {
        printf("Enter the day: "); scanf("%d", &d);
        printf("Enter the month: "); scanf("%d", &m);
        printf("Enter the year: "); scanf("%d", &y);
        if (valid(d, m, y)==1)
        {
            printf("The date of %d/%d/%d is a valid date!\n", d, m ,y);
        }
        else
        {
            printf("The date of %d/%d/%d is not a valid date!\n", d, m ,y);
        }
        printf("Continue(0 to stop, 1 to continue)? ");
        scanf("%d", &t);
    } while (t!=0);
    return (EXIT_SUCCESS);
}

int valid(int d, int m, int y)
{
    int c;
    int dmax;
    if (d < 1 || d > 31 || m < 1 || m > 12)
    {
        c = 0;
    }
    else
    {


         // set day max;
        if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            dmax = 30;
        }
        else if (m == 2)
        {
            if (leapyear(y)==1)
            {
                dmax = 29;
            }
            else
            {
                dmax = 28;
            }
        }
        else
        {
            dmax = 31;
        }

        // checking;
        if (d > dmax)
        {
            c = 0;
        }
        else
        {
            c = 1;
        }
    }
    return c;
}

int leapyear(int y)
{
    if ((y%400 == 0) || ( (y%4 == 0) && (y%100 != 0)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

*/
//Program 3
/*
#include <stdio.h>
#include <stdlib.h>

int checkPos(double x, double y, double r);

int main(int argc, char** argv) {

    double x, y, r;
    int result;
    printf("Enter the x: ");
    scanf("%lf", &x);
    printf("Enter the y: ");
    scanf("%lf", &y);
    while (x == 0 && y == 0)
    {
        printf("The point given is the center of the circle !!!\n");
        printf("Enter the x: ");
        scanf("%lf", &x);
        printf("Enter the y: ");
        scanf("%lf", &y);
    }
    do
    {
        printf("Enter the radius r > 0: ");
        scanf("%lf", &r);
    } while (r <= 0);

        result = checkPos(x, y, r);
        if (result == 1)
        {
            printf("The point (%.2lf; %.2lf) is IN the circle whose center is O(0; 0) and radius is r = %.2lf", x, y, r);
        }
        else if (result == 0)
        {
            printf("The point (%.2lf; %.2lf) is ON the circle whose center is O(0; 0) and radius is r = %.2lf", x, y, r);
        }
        else
        {
            printf("The point (%.2lf; %.2lf) is OUT OF the circle whose center is O(0; 0) and radius is r = %.2lf", x, y, r);
        }
    return (EXIT_SUCCESS);
}

int checkPos(double x, double y, double r)
{
    double d, rr;
    d = x*x + y*y;
    rr = r*r;
    if (d < rr) {
        return 1;
    }
    else if (d == rr) {
        return 0;
    }
    else {
        return -1;
    }
}
*/

//Program 4
/*
#include <stdio.h>
#include <stdlib.h>

double factorial(int n);

int main(int argc, char** argv) {

    int n;
    do {
        do {
            printf("Enter a positive integer (or 0 to stop): ");
            scanf("%d", &n);
        } while (n < 0);
        printf("Factorial of %d is: %.0lf .\n", n, factorial(n));
    } while (n != 0);
    return (EXIT_SUCCESS);
}

double factorial(int n)
{
    int i;
    double result;
    result = 1.00;
    for (i = 2; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}
*/

//Program 5
/*
#include <stdio.h>
#include <stdlib.h>


double fibo(int n);

int main(int argc, char** argv) {

    int n;
        do {
            printf("Enter a positive integer: ");
            scanf("%d", &n);
        } while (n < 1);
        printf("The value at the %dth position in Fibonacci sequence is: %.0lf .\n", n,fibo(n));
    return (EXIT_SUCCESS);
}

double fibo(int n)
{
    int i;
    double t1 = 1, t2 = 1;
    int f;
    if (n == 1 || n == 2)
		 f = 1;

    else
        for (i = 3; i <= n; i++) {
            f = t2 + t1;
            t1 = t2;
            t2 = f;
        }

    return f;
}
*/

//Program 6
/*
#include <stdio.h>
#include <stdlib.h>

int isFibo(int n, int *p);

int main(int argc, char** argv) {

    int n, i;
    do {
        printf("Enter an integer: ");
        scanf("%d", &n);
    } while (n < 1);
    if (isFibo(n, &i)==1)
    {
        printf("%d is the value at the %dth position of the Fibonacci sequence", n, i);
    }
    else
    {
        printf("%d is not an element of the Fibonacci sequence!", n);
    }
    return (EXIT_SUCCESS);
}

int isFibo(int n, int *p)
{
    int f = 1, i = 2;
    int t1 = 1, t2 = 1;
    if (n == 1) { *p = 1; return 1;}
    else {
        while (f < n)
        {
            f = t1 + t2;
            t1 = t2;
            t2 = f;
            i++;
        }
        if (n == f)
        {
            *p = i;
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
*/

//Program 7
/*
#include <stdio.h>
#include <stdlib.h>

int SumDigit(int n);

int main(int argc, char** argv) {

    int n, S;
    do {
        printf("Enter a positive integer (0 to stop): ");
        scanf("%d", &n);
        if (n > 0)
        {
            S = SumDigit(n);
            printf("Sum of the digits of %d is: %d\n", n, S);
        }
    } while (n != 0);
    return (EXIT_SUCCESS);
}

int SumDigit(int n)
{
    int i, S=0;
    while (n > 0)
    {
        i = n % 10; // lấy phần dư của n (hàng đơn vị của n)
        S+=i;
        n = n / 10; // lấy mấy số còn lại
    }
    return S;
}
*/

//Program 8
/*
#include <stdio.h>
#include <stdlib.h>

double mDouble(double ipart, double fraction);

int main(int argc, char** argv) {

    int ipart, fraction = -1;
    double value;
    printf("Enter the integral part: ");
    scanf("%d", &ipart);
    while (fraction < 0)
    {
        printf("Enter its positive fraction: ");
        scanf("%d", &fraction);
    }
    value = mDouble(ipart, fraction);
    printf("The real number is: %lf", value);
    return (EXIT_SUCCESS);
}

double mDouble(double ipart, double fraction)
{
    double result;
    while (fraction >= 1)
    {
        fraction = fraction / 10; // 123 -> 12.3 -> 1.23 -> 0.123
    }
    if (ipart >= 0)
    {
        result = ipart + fraction; // 5 & 0.123 -> 5.123
    }
    else
    {
        result = ipart - fraction; // -5 & 0.123 -> -5.123
    }
    return result;
}
*/

//Program 9
///*

#include <stdio.h>
#include <stdlib.h>


int gcd(int a, int b);
int lcm(int a, int b);

int main(int argc, char** argv) {

	int a=-1, b=-1, c, d;
	while (a<= 0 || b<=0) {
		printf("Enter positive integer a: ");
		scanf("%d", &a);
		printf("Enter positive integer b: ");
		scanf("%d", &b);
	}
	c = gcd(a,b); // UCLN
	d = lcm(a,b); // BCNN
	printf("GCD(%d, %d) = %d\n", a, b, c);
	printf("LCM(%d, %d) = %d\n", a, b, d);
	return (EXIT_SUCCESS);
}

int gcd(int a, int b) {
	while (a != b) {
		if (a > b) {
			a = a- b;
		} else {
			b = b- a;
		}
	}
	return a;
}

int lcm(int a, int b) {
	return (a*b)/gcd(a,b);
}
//*/

//Program 10
/*
#include <stdio.h>
#include <stdlib.h>

int printMinMaxDigit(int n);

int main(int argc, char** argv) {

    int n = -1;
    while (n < 0)
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    }
    printMinMaxDigit(n);
    return (EXIT_SUCCESS);
}

int printMinMaxDigit(int n)
{
    int digit;
    int min, max;

    digit = n % 10; // Lấy chữ số hàng đơn vị
    min = digit; max = digit;
    n = n / 10; // Bỏ đi chữ số hàng đơn vị

    // Làm tiếp với mấy chữ số hàng tiếp theo
    while (n >= 1)
    {
        digit = n % 10;
        if (digit > max) {max = digit; }
        if (digit < min) {min = digit; }
        n = n / 10;
    }
    printf("Maximum digit is: %d\nMinimum digit is: %d\n", max, min);
}
*/