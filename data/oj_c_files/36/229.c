#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int p(int i);
char a[100],b[100];
int l;
int main(int argc,char *argv[])
{
    int i,flag=1;    
    scanf("%s%s",a,b);
    l=strlen(b);
    for(i=0;i<strlen(a);i++)if(p(i)==0){flag=0;break;}
    for(i=0;i<l;i++)if(b[i]!=0){flag=0;break;}
    if(flag==1)printf("YES\n");
    else printf("NO\n");
    return 0;
}
int p(int i)
{
     int j,flag1=0;
     for(j=0;j<l;j++)if(a[i]==b[j]){flag1=1;b[j]=0;break;}
     if(flag1==0){return 0;}
     else return 1;
}