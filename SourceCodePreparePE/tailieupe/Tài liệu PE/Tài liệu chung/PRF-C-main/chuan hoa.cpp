#include<stdio.h>
#include<string.h>
int  main(){
int i,l; char s[255],t[100];
printf("nhap s"); gets(s);

// xoa ki tu trang o dau xau
while (s[0]==' ') strcpy(&s[0],&s[1]);// xoa ki tu chua dau cach
// xoa ki tu trang o cuoi xau
while (s[strlen(s)-1]==' ') strcpy(&s[strlen(s)-1],&s[strlen(s)]);//xoa ki tu chua dau cach

//xoa ki tu trang thua o giua xau
for(i=0; i<strlen(s) ;i++)
	if ((s[i]==' ')&&(s[i+1]==' '))
	{	strcpy(&s[i],&s[i+1]);
		i--;}
l=strlen(s);		

  // đảo nược xâu
  /*for(i=0; i<strlen(s) ;i++){
	strcpy(t,s[i]);
	strcpy(s[i],s[l-1-i]);
	strcpy(s[l-1-i],t);}*/
for(i=0; i<strlen(s) ;i++){
	t[i]=s[l-1-i];}
	t[l]='\0';
	
	

//if (s[0]>='a'&& s[0]<='z') s[0]-=32;
for(i=0; i<strlen(s) ;i++)
{if(i==0 || s[i+1]==' ')
if (s[i]>='a'&& s[i]<='z') s[i]-=32;}

printf("xau da chuan hoa : \"%s\"",s);


}


