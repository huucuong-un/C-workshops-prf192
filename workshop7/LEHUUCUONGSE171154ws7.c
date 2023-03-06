//Program1


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void addstu(char stu[][MAX+1], int pos);
void removestu(char stu[][MAX+1], int pos);
void searchstu(char stu[][MAX+1], int pos);
void printasc(char stu[][MAX+1], int pos);

// Hàm Loại bỏ khoảng trắng và NameStr
char* lTrim(char s[]);
char* rTrim(char s[]);
char* trim(char s[]);

// Kiểm tra danh sách
int isFull(char s[], int pos);
int isEmpty(char s[], int pos);


int main(int argc, char** argv) {

    char stu[MAX][MAX+1];
    int choice;
    int pos = -1;
    
    do
    {
        printf("=================\n");
        printf("Choose an option: \n");
        printf("1 - Add a student.\n");
        printf("2 - Remove a student.\n");
        printf("3 - Search a student.\n");
        printf("4 - Print the list in ascending order.\n");
        printf("5 - Quit.\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                pos++;
                addstu(stu, pos);
                break;
                
            case 2:
                removestu(stu, pos);
                pos--;
                break;
                
            case 3:
                searchstu(stu, pos);
                break;
                
            case 4:
                printasc(stu, pos);
                break;
        }
    } while (choice != 5);

    return (EXIT_SUCCESS);
}

void addstu(char stu[][MAX+1], int pos)
{
    if (isFull(stu[pos], pos))
    {
        printf("\tThere are 100 students already!\n");
    }
    else
    {
        printf("\tEnter %dth Student name (maximum 100 characters): ", pos+1);
        fflush(stdin);
        scanf("%100[^\n]", stu[pos]);
        trim(stu[pos]);
        strupr(stu[pos]);
        printf("Add student: %s successfully.\n", stu[pos]);
    }
}

void removestu(char stu[][MAX+1], int pos)
{
    int remPos;
    if (isEmpty(stu[pos], pos))
    {
        printf("\tThe list is empty. Please enter some students!\n");
    }
    else
    {
        printf("====================\n\t\tThe list of students:\n");
        printf("\t\t\tID\tName\n");
        for (int i = 0; i <= pos; i++)
        {
            printf("\t\t\t%d\t", i);
            puts(stu[i]);
            printf("\n");
        }
        do
        {
            printf("\tEnter the ID of student you want to remove: ");
            scanf("%d", &remPos);
        } while (remPos < 0 || remPos > pos);
        
        // remove
        for (int i = remPos; i < pos; i++)
            strcpy(&stu[i], &stu[i+1]); //đẩy giá trị sau lên 
        printf("Remove student successfully!\n");
    }
}

void searchstu(char stu[][MAX+1], int pos)
{
    char s[MAX+1];
    int check = 0;
    if (isEmpty(stu[pos], pos))
    {
        printf("\tThe list is empty. Please enter some students!\n");
    }
    else
    {
        printf("\tEnter student to search: ");
        fflush(stdin);
        scanf("%100[^\n]", s);
        strupr(s);
        printf("\t\t\tSEARCH RESULT:\n");
        printf("\t\t\tID\tName\n");
        for (int i = 0; i <= pos; i++)
        {
            if ((strstr(stu[i], s)) != NULL)
            {
                check = 1;
                printf("\t\t\t%d\t", i);
                puts(stu[i]);
                printf("\n");
            }
        }
    }
    if (check == 0)
        printf("No results found!");
}

void printasc(char stu[][MAX+1], int pos)
{
    if (isEmpty(stu[pos], pos))
    {
        printf("\tThe list is empty. Please enter some students!\n");
    }
    else
    {
        char nstu[MAX][MAX+1];
        int i, j;
        char t[MAX+1];
        printf("\t\tSTUDENTS IN ASCENDING ORDER\n");
        for (i = 0; i <= pos; i++)
        {
            strcpy(nstu[i], stu[i]);
        }
        for (i = 0; i <= pos; i++)
        {
            for (j = i+1; j <= pos; j++)
            {
                if (strcmp(nstu[j], nstu[i]) < 0)
                {
                    strcpy(t, nstu[j]);
                    strcpy(nstu[j], nstu[i]);
                    strcpy(nstu[i], t);
                }
            }
            printf("\t\t\t");
            puts(nstu[i]);
            printf("\n");
        }
    }
}

// Loại khoảng trắng bên trái sring
char* lTrim(char s[])
{
    int i = 0;
    while (s[i] == ' ') 
        i++;
    if (i > 0)
        strcpy(&s[0], &s[i]);
    return s;
}

// Loại khoảng trắng bên phải sring
char* rTrim(char s[])
{
    int i = strlen(s) - 1;
    while (s[i] == ' ')
        i--;
    s[i+1] = '\0';
    return s;
}

// Loại từ 2 khoảng trắng trở lên (khoảng trắng thừa)
char* trim(char s[])
{
    rTrim(lTrim(s));
    char *ptr = strstr(s, "  ");
    while (ptr != NULL)
    {
        strcpy(ptr, ptr+1);
        ptr = strstr(s, "  ");
    }
    return s;
}

// Mảng đầy
int isFull(char s[], int pos)
{
    return pos == MAX - 1;
}

// Mảng rỗng
int isEmpty(char s[], int pos)
{
    return pos == -1;
}



//Program2
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100


void addEmp(char code[][9], char name[][21], int pos);
void searchEmp(char code[][9], char name[][21], int pos);
int removeEmp(char code[][9], char name[][21], int pos);
void decEmp(char code[][9], char name[][21], int pos);

char* lTrim(char s[]);
char* rTrim(char s[]);
char* trim(char s[]);
int isFull(char s[], int pos);
int isEmpty(char s[], int pos);

int main(int argc, char** argv) {

    char code[MAX][9];
    char name[MAX][21];
    int pos = -1;
    int choice;
    do
    {
        printf("=====================\n");
        printf("Select an option: \n");
        printf("1 - Add a new employee.\n");
        printf("2 - Find data about employees.\n");
        printf("3 - Remove an employee.\n");
        printf("4 - Print employee list in descending order based on Code.\n");
        printf("5 - Quit.\n");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
                pos++;
                addEmp(code, name, pos);
                break;
                
            case 2:
                searchEmp(code, name, pos);
                break;
                
            case 3:
                if (removeEmp(code, name, pos) == 1)
                {
                    printf("Remove employee successfully!\n");
                    pos--;
                }
                else
                {
                    printf("There is no such an employee to remove!\n");
                }
                break;
                
            case 4:
                decEmp(code, name, pos);
                break;
        }
    } while (choice != 5);
    return (EXIT_SUCCESS);
}

void addEmp(char code[][9], char name[][21], int pos)
{
    if (isFull(code[pos], pos))
    {
        printf("The list is full!.\n");
    }
    else
    {
        printf("\tAdd the %dth new employee: \n", pos+1);
        printf("\t\tEnter employee's code (8 characters max): ");
        fflush(stdin);
        scanf("%8[^\n]", code[pos]);
        strupr(code[pos]);
        printf("\t\tEnter employee's name (20 characters max): ");
        fflush(stdin);
        scanf("%20[^\n]", name[pos]);
        trim(name[pos]);
        strupr(name[pos]);
        printf("Add new employee with the code %s and the name %s successfully!\n", code[pos], name[pos]);
    }
}

void searchEmp(char code[][9], char name[][21], int pos)
{
    char sstr[21];
    int check = 0;
    if (isEmpty(code[pos], pos))
    {
        printf("\tThe list is empty!");
    }
    else
    {
        printf("\tEnter the name to find data: ");
        fflush(stdin);
        scanf("%20[^\n]", sstr);
        strupr(sstr);
        printf("\t\tSEARCH RESULT\n");
        printf("\t\tCode\t\tName\n");
        for (int i = 0; i <= pos; i++)
        {
            if (strstr(name[i], sstr) != NULL)
            {
                printf("\t\t%s\t\t%s\n", code[i], name[i]);
                check = 1;
            }
        }
        if (check == 0)
            printf("No results found!");
    }
}

int removeEmp(char code[][9], char name[][21], int pos)
{
    char codeRem[9];
    int check = 0;
    int idCheck = -1, i;
    if (isEmpty(code[pos], pos))
    {
        printf("The list is empty!\n");
    }
    else
    {
        printf("\t======================\n");
        printf("\tThe list of employees:\n");
        printf("\t\tCode\t\tName\n");
        for (i = 0; i <= pos; i++)
        {
            printf("\t\t%s\t\t%s\n", code[i], name[i]);
        }
        printf("Enter employee's code to remove: ");
        fflush(stdin);
        scanf("%8[^\n]", codeRem);
        strupr(codeRem);
        for (i = 0; i <= pos; i++)
        {
            if (strcmp(codeRem, code[i]) == 0)
            {
                check = 1;
                idCheck = i;
                break;
            }
        }
        if ((check == 1))
        {
            // remove
            for (i = idCheck; i < pos; i++)
            {
                strcpy(&code[i], &code[i+1]);
                strcpy(&name[i], &name[i+1]);
            }
        }
        return check;
    }
}



void decEmp(char code[][9], char name[][21], int pos)
{
    char cCode[MAX][9];
    char cName[MAX][21];
    char tC[9];
    char tN[21];
    int i, j;
    if (isEmpty(code[pos], pos))
    {
        printf("The list is empty!");
    }
    else
    {
        for (i = 0; i <= pos; i++)
        {
            strcpy(&cCode[i], &code[i]);
            strcpy(&cName[i], &name[i]);
        }
        printf("\t\tList in descending order based on CODE\n");
        printf("\t\t\tCode\t\tName\n");
        for (i = 0; i <= pos; i++)
        {
            for (j = i + 1; j <= pos; j++)
            {
                if (strcmp(cCode[j], cCode[i]) > 0)
                {
                    strcpy(&tC, &cCode[j]);
                    strcpy(&cCode[j], &cCode[i]);
                    strcpy(&cCode[i], &tC);
                    
                    strcpy(&tN, &cName[j]);
                    strcpy(&cName[j], &cName[i]);
                    strcpy(&cName[i], &tN);
                }
            }
            printf("\t\t\t%s\t\t%s\n", cCode[i], cName[i]);
        }
    }
}

char* lTrim (char s[])
{
    int i = 0;
    while (s[i] == ' ')
        i++;
    if ( i > 0)
        strcpy(&s[0], &s[i]);
    return s;
}

char *rTrim (char s[])
{
    int i = strlen(s) - 1;
    while (s[i] == ' ')
        i--;
    s[i+1] = '\0';
    return s;
}

char* trim (char s[])
{
    rTrim(lTrim(s));
    char *ptr = strstr(s, "  ");
    while (ptr != NULL)
    {
        strcpy(ptr, ptr+1);
        ptr = strstr(s, "  ");
    }
    return s;
}

int isFull  (char s[], int pos)
{
    return pos == MAX - 1;
}

int isEmpty (char s[], int pos)
{
    return pos == -1;
}
*/

//Program3 
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 100
#define MAXL 20

int menu()
{   
	int choice;
	printf("\n		        	 M E N U 										 ");
	printf("\n 1- Add a new soft drink.                                               Press: 1  ");
	printf("\n 2- Printing out items which belong to a same origin. (Country)         Press: 2  ");
	printf("\n 3- Printing out items whose volumes are between [(ml)__and__(ml)].     Press: 3  ");
	printf("\n 4- Printing the list in ascending order based on volumes then prices.  Press: 4  ");
	printf("\n 5- Quit.                                                               Press: 5  ");
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

char* lTrim(char s[])
{
	int i = 0;
	while (s[i] == ' ')	i++;
	if (i > 0) strcpy(&s[0], &s[i]);
	return s;
}

char* rTrim(char s[])
{
	int i = strlen(s)-1;
	while (s[i] == ' ') i--;
	s[i+1] = '\0';
	return s;
}

char* trim(char s[])
{
	rTrim(lTrim(s));
	char *ptr = strstr(s, "  ");
	while (ptr != NULL)
	{
		strcpy(ptr, ptr+1);
		ptr = strstr(s, "  ");
	}
	return s;
}

char* nameStr (char s[])
{
	trim(s);
	strlwr(s);
	int L = strlen(s);
	int i;
	for (i = 0; i < L; i++)
		if (i == 0 || (i > 0 && s[i-1] == ' '))
			s[i] = toupper(s[i]);
	return s;
}

void addSoftDrink(char name[][MAXL], char make[][MAXL], int volume[], int price[], int duration[], int *pn)
{
	char names[MAXL], makes[MAXL];
	int volumes, prices, durations;
	printf("\n--Enter Information Of Soft Drinks--\n");
	printf("Name: ");
	scanf("%[^\n]", names);
	fflush(stdin);
	printf("Made in: ");
	scanf("%[^\n]", makes);
	fflush(stdin);
	printf("Volume (ml): ");
	scanf("%d", &volumes);
	printf("Price (VND): ");
	scanf("%d", &prices);
	printf("Duration (Days): ");
	scanf("%d", &durations);
	printf("\nAdded!\n");
	nameStr(names);
	nameStr(makes);
	strcpy(name[*pn], names);
	strcpy(make[*pn], makes);
	volume[*pn] = volumes;
	price[*pn] = prices;
	duration[*pn] = durations;
	(*pn)++;
}

void printList(char name[][MAXL], char make[][MAXL], int volume[], int price[], int duration[], int n)
{
	printf("\nName: %s\n", name[n]);
	printf("Made in: %s\n", make[n]);
	printf("Volume: %d ml\n", volume[n]);
	printf("Price: %d VND\n", price[n]);
	printf("Duration: %d Days\n", duration[n]);
}

void printBaseMake(char name[][MAXL], char make[][MAXL], int volume[], int price[], int duration[], int n)
{
	char makes[MAXL];
	printf("\nEnter origin of soft drink you wanna print: ");
	scanf("%[^\n]", makes);
	fflush(stdin);
	nameStr(makes);
	int i, check;
	check = 0;
	for (i = 0; i < n; i++)
	{
		if (strcmp(makes, make[i]) == 0)
		{
			printf("\n>>List of Soft Drink base on %s:\n", make[i]);
			printList(name, make, volume, price, duration, i);
			check = 1;
		}
	}
	if (check == 0)
		printf("\nThere are not any soft drinks on the list based on %s!!!\n", makes);
}

void printBaseVol(char name[][MAXL], char make[][MAXL], int volume[], int price[], int duration[], int n)
{
	int maxVol, minVol;
	printf("\nEnter the MIN and MAX mil of soft drinks you wanna print: \n");
	printf("Min (ml): ");
	scanf("%d", &minVol);
	printf("Max (ml): ");
	scanf("%d", &maxVol);
	int i, check = 0;
	for (i = 0; i <= n; i++)
		if ((volume[i] >= minVol) && (volume[i] <= maxVol))
		{
			printList(name, make, volume, price, duration, i);
			check = 1;
		}
	if (check == 0)
		printf("\nThere are not any soft drinks between %d ml and %d ml!!!\n", minVol, maxVol);
}

void printAsc(char name[][MAXL], char make[][MAXL], int volume[], int price[], int duration[], int *pn)
{
	int i, j;
	for (i = 0; i < (*pn)-1; i++)
	{
		for (j = (*pn)-1; j > i; j--)
		{
			if (price[j]+duration[j] < price[j-1]+duration[j-1])
			{
				char transName[MAXL];
				strcpy(transName, name[j-1]);
				strcpy(name[j-1], name[j]);
				strcpy(name[j], transName);
				
				char transMake[MAXL];
				strcpy(transMake, make[j-1]);
				strcpy(make[j-1], make[j]);
				strcpy(make[j], transMake);
				
				int transVol;
				transVol = volume[j-1];
				volume[j-1] = volume[j];
				volume[j] = transVol;
				
				int transPri;
				transPri = price[j-1];
				price[j-1] = price[j];
				price[j] = transPri;
				
				int transDur;
				transDur = duration[j-1];
				duration[j-1] = duration[j];
				duration[j] = transDur;
			}
		}
	}
	for (i = 0; i < *pn; i++)
		printList(name, make, volume, price, duration, i);
}

int main()
{
	int userChoice, check = 1;
	char name[MAXN][MAXL];
	char make[MAXN][MAXL];
	int volume[MAXN];
	int price[MAXN];
	int duration[MAXN];
	int n = 0;
    do
    {
		userChoice = menu();
    	switch(userChoice)
		{
			case 1:
				if (isFull(n))
					printf("\nSorry! The List is full!\n");
				else
					addSoftDrink(name, make, volume, price, duration, &n);
		        break;
		    case 2:
		    	if (isEmpty(n))
					printf("\nSorry! The List is empty!\n");
				else
					printBaseMake(name, make, volume, price, duration, n);
			    break;
			case 3:
				if (isEmpty(n))
					printf("\nSorry! The List is empty!\n");
				else
					printBaseVol(name, make, volume, price, duration, n);
				break;
			case 4:
				if (isEmpty(n))
					printf("\nSorry! The List is empty!\n");
				else
					printAsc(name, make, volume, price, duration, &n);
				break;
		    default:
		    	if (userChoice == 5)
		    		check = 0;
		    	else 
					printf("\n>>Wrong Input!!!\n");					
	    }
	}
	while (check == 1);
	printf("\nGood Bye!");
	getch();
}
//*/
