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

const int maxn=100;
int a[maxn+10];
char line[maxn+10];
int main()
{
    int i,j=0;
    scanf("%s",line);
    int len=strlen(line);
    int a[maxn+10]={0},b;
    int temp=0;
    
    for(i=0;i<len;i++)
    {
        temp=temp*10+line[i]-'0';
        a[i]=temp/13;
        temp=temp%13;
    }
    int m=0;
    if(len==1)printf("0");
    if((len<=2)&&(((line[0]-'0')*10+(line[1]-'0'))<13))printf("0");
    for(i=0;i<len;i++)
    {
        if(a[i]!=0){m=1;}
        if(m==1)printf("%d",a[i]);
        
        
    }
    printf("\n%d",temp);
    return 0;
}

