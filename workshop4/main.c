//Program 1
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime(int n);
void minmax(int n);

int main(int argc, char** argv) {

    int select, n=-1;
    do {
        printf("Select one of these functions: \n");
        printf("1 - Process primes\n");
        printf("2 - Print min, max digit in an integer\n");
        printf("3 - Quit\n");
        scanf("%d", &select);
        switch (select)
        {
            case 1:
                do 
                {
                    printf("\tEnter a positive integer: ");
                    scanf("%d", &n);
                } while (n <= 1);
                if (prime(n)==1) {
                    printf("%d is a prime!\n", n);                
                }
                else
                {
                    printf("%d is not a prime!\n", n);
                }
                break;
            case 2:
                do 
                {
                    printf("\tEnter a positive integer: ");
                    scanf("%d", &n);
                } while (n <= 0);
                minmax(n);
                break;
        }
    } while (select > 0 && select < 3);
    return (EXIT_SUCCESS);
}

int prime(int n)
{
    int i, re=1;
    int nn = sqrt(n);
    for (i=2; i <= nn; i++)
    {
        if (n%i == 0)
        {
            re = 0;
            break;
        }
        else
        {
            re = 1;
        }
    }
    return re;
}

void minmax(int n)
{
    int min, max, digit;
    digit = n%10;
    min = digit;
    max = digit;
    n = n/10;
    
    while (n>0)
    {
        digit = n%10;
        if (digit < min) {min = digit; }
        if (digit > max) {max = digit; }
        n = n/10;
    }
    printf("Max digit is: %d\n", max);
    printf("Min digit is: %d\n", min);
}
*/

//Program 2
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void Fibo(int n);
void isDate(int day, int month, int year);

int main(int argc, char** argv) {

    int select, n;
    int day, month, year;
    do {
        printf("Select an option: \n");
        printf("1 - Fibonacci sequence\n");
        printf("2 - Check a date\n");
        printf("3 - Quit\n");
        scanf("%d", &select);
        switch (select)
        {
            case 1:
                do
                {
                    printf("\tEnter a positive integer: ");
                    scanf("%d",&n);
                } while (n<=0);
                Fibo(n);
                break;
            case 2:
                printf("\tEnter the day: ");
                scanf("%d", &day);
                printf("\tEnter the month: ");
                scanf("%d", &month);
                printf("\tEnter the year: ");
                scanf("%d", &year);
                isDate(day, month, year);
                break;
        }
    } while (select > 0 && select < 3);
    return (EXIT_SUCCESS);
}

void Fibo(int n)
{
    int i, t1 = 1, t2 = 1, temp;
    if (n == 1)
    {
        printf("The first Fibonacci number is: %d", t1);
    }
    else if (n == 2)
    {
        printf("The two first Fibonacci numbers are:\n %d\t%d", t1, t2);
    }
    else
    {
        printf("The %d first Fibonacci numbers are:\n 1\t1\t", n);
        for (i = 3; i <= n; i++)
        {
            temp = t1;
            t1 = t2;
            t2 = temp + t2;
            printf("%d\t", t2);
        }
        
    }
    printf("\n");
}

void isDate(int day, int month, int year)
{
    int re, daymax;
    if (day <= 0 || month <= 0 || year <= 0 || month > 12)
    {
        re = 0;
    }
    else
    {
        if (month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        {
            daymax=31;
        }
        else if (month==2)
        {
            if (year%400==0 || (year%4==0 && year%100!=0))
            {
                daymax=29;
            }
            else
            {
                daymax=28;
            }
        }
        else
        {
            daymax = 30;
        }
        re = day <= daymax ? 1:0;
        
                
    }
    switch (re)
        {
            case 0:
                printf("The date of %d/%d/%d is not a valid date!\n", day, month, year);
                break;
            case 1:
                printf("The date of %d/%d/%d is a valid date!\n", day, month, year);
                break;
        }
}

*/