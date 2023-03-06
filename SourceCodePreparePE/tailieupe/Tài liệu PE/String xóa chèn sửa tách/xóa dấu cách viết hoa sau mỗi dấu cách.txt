#include <stdio.h>
#include <string.h>
#include <ctype.h>

void clearStr(char s[])
{
	int i,j;
	for(i = 0;i < strlen(s); i++)
	{
		while(isspace(s[i]) && isspace(s[i + 1]))
		{
			for(j = i; j < strlen(s); j++)
			{
				s[j] = s[j + 1];
			}
		}
	}
	while(isspace(s[0]))
	{
		for(j = 0; j < strlen(s);j++)
		{
			s[j] = s[j + 1];	
		} 
	}
	for(i = 0; i < strlen(s); i++)
	{
		if(isspace(s[i]))
			s[i] = ' ';
	}
	s[0] = toupper(s[0]);
	for(i = 0; i < strlen(s);i++)
	{
		if(isspace(s[i]))
			s[i + 1] = toupper(s[i + 1]);
	}
}

int main()
{
	char s[100];
	scanf("%[^'\n']s", &s);
	clearStr(s);
	printf("%s", s);
}

