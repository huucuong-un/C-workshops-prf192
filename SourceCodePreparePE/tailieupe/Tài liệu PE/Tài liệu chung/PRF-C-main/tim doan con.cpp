#include <stdio.h>
int min(int a, int b){
    return (a < b ? a : b);
}
int max(int a, int b){
    return (a > b ? a : b);
}

int main()
{
 int a,b,c,s1,e1,s2,e2,s3,e3,M,m,count,s;
 scanf("%d%d%d%d%d%d%d%d%d", &a,&b,&c,&s1,&e1,&s2,&e2,&s3,&e3);
 M=max(e1,e2);M=max(M,e3);
 m=min(s1,s2);m=min(m,s3);
    s=0;
    for (int i=m;i<M;i++){
        if (i>=s1&&i<e1) count++;
        if (i>=s2&&i<e2) count++;
        if (i>=s3&&i<e3) count++;
        if (count==1) s=s+a;
        if (count==2) s=s+b*2;
        if (count==3) s=s+c*3;
        count=0;
        
    }
    
 printf("%d",s);
 return 0;
}
