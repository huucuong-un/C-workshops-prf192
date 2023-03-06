#include <stdio.h>
 
int main() {
    int gio,phut;
    char a,b,c,d,e,f,g,h;
         scanf("%c%c", &a,&b);
          scanf("%*c%c%c", &c,&d);
           scanf(" %c%c", &e,&f);
          scanf("%*c%c%c", &g,&h);
    phut=g*10+h - (c*10+d);
    gio=e*10+f -(a*10+b);
    if (phut<0){phut+=60;gio-=1;	}
    if (gio<0) gio+=24;
    if (gio<10) printf("0");
    printf("%d:",gio);
     if (phut<10) printf("0");
    printf("%d",phut);
    
	
    return 0;
}
 
