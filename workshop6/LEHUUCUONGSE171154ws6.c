
//Program 1
/*
#include <stdio.h>
#include <stdlib.h>



int checkISBN(int n)
{
    int re = 0;
    int m[11], c[11];
    int k[9] = {10, 9, 8, 7, 6, 5, 4, 3, 2};
    int i;
    int sumn;
    if (n > 1000000)
    {
        for (i = 10; i > 0; i--)
        {
            m[i] = n % 10;
            n = n / 10;
        }
        sumn = 0;
        sumn = sumn + m[10];
        for (i = 1; i < 10; i++)
        {
            c[i] = k[i - 1] * m[i];
            sumn = sumn + c[i];
        }
        if (sumn % 11 == 0) re = 1;
    }
    return re;
}

int main(int argc, char** argv) {

    int n;
    do {
        printf("Enter a number (10 digits) (or O to stop): ");
        scanf("%d", &n);
        if (checkISBN(n) == 1)
			printf("\t%d is an ISBN\n", n);
        else if (n == 0) 
			printf("Have a nice day!");
        else 
			printf("\t%d is not an ISBN\n", n);
        
    } while (n != 0);

	    


    return 0;
}
*/

//Program2
///*
#include <stdio.h>
#include <stdlib.h>

#define MAXN 100

int menu()
{   
	int choice;
	printf("\n		      MENU							  ");
	printf("\n 1- Add a value                       Press: 1 ");
	printf("\n 2- Search a value                    Press: 2 ");
	printf("\n 3- Print out the array               Press: 3 ");
	printf("\n 4- Print out values in a range       Press: 4 ");
	printf("\n 5- Print out the array in ascending  Press: 5 ");
	printf("\n 6- Quit                              Press: 6 ");
	printf("\n\n");
	printf("\nEnter Your Choice: ");
	scanf("%d", &choice);
	fflush(stdin);
	return choice;
}

int isFull(int n)
{
	return n == MAXN;
}

int isEmpty(int n)
{
	return n == 0;
}

void add(int values, int value[], int *pn)
{
	value[*pn] = values;
	(*pn)++;
}

int search(int values, int value[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		if (value[i] == values)
			return i;
	return -1;
}

void printArray(int value[], int n)
{
	printf("\nArray of number: \n");
	int i, j;
	for (i = 0; i < n; i++)
	{
		j = value[i];
		printf("%d ", j);
	}
}

void printRange(int value[], int n)
{
	int maxVal, minVal, t = -1;
	printf("\nEnter the range [a..b]:\n");
	printf("\na = ");
	scanf("%d", &minVal);
	printf("\nb = ");
	scanf("%d", &maxVal);
	printf("\n");
	int i;
	for (i = 0; i < n; i++)
		if (value[i] >= minVal && value[i] <= maxVal)
		{
			printf("%d ", value[i]);
			t = i;
		}
	if (t < 0)
		printf("No value between range!\n");
}

void printASC(int value[], int n)
{
	int *adds = (int*)calloc(n, sizeof(int));
	int i, j;
	for (i = 0; i < n; i++)
		adds[i] = value[i];
	int t;
	for (i = 0; i < n-1; i ++)
		for ( j = n-1; j > i; j--)
	 		if (adds[j] < adds[j-1])
	 		{
	 			t = adds[j];
	 			adds[j] = adds[j-1];
	 			adds[j-1] = t;
			}
	for (i = 0; i < n; i++)
		printf("%d ", adds[i]);
	free(adds);
}

int main()
{
	int value[MAXN];
	int n = 0;
	int values;
	int userChoice, check = 1;
    do
    {
		userChoice = menu();
    	switch(userChoice)
		{
			case 1:
				if (isFull(n))
					printf("\nSorry! The Array is full!\n");
				else
				{
					printf("\nInput an added value: ");
					scanf("%d", &values);
					add(values, value, &n);
					printf("\nAdded!\n");
				}
		        break;
		    case 2:
		    	if (isEmpty(n))
					printf("\nSorry! The Array is empty!\n");
				else
				{
					int pos;
					printf("\nInput the search value: ");
					scanf("%d", &values);
					pos = search(values, value, n);
					if (pos < 0 || pos > n)
						printf("\nNot found!\n");
					else
						printf("\nPosition is found: %d\n", pos + 1);
				}
			    break;
			case 3:
				if (isEmpty(n))
					printf("\nSorry! The Array is empty!\n");
				else
					printArray(value, n);
				break;
			case 4:
				if (isEmpty(n))
					printf("\nSorry! The Array is empty!\n");
				else
					printRange(value, n);
				break;
			case 5:
				if (isEmpty(n))
					printf("\nSorry! The Array is empty!\n");
				else
					printASC(value, n);
				break;
		    default:
		    	if (userChoice == 6)
		    		check = 0;
		    	else 
					printf("\n>>>Wrong input!!!!\n");					
	    }
	}
	while (check == 1);
	printf("\nGood Bye!");
	getch();
}