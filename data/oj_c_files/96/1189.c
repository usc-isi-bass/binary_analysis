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

int main()
{
    char s[101];
    int a[100]={0},b[100]={0},c,i;
    scanf("%s",s);
    c=strlen(s);
    for(i=0;i<c;i++) a[i]=s[i]-'0';
    for(i=0;i<c-1;i++)
    {
        b[i]=(a[i]*10+a[i+1])/13;
        a[i+1]=(a[i]*10+a[i+1])%13;            
    }
    if(c>2)
    {
        if(b[0]!=0) printf("%d",b[0]);
        for(i=1;i<c-1;i++)  printf("%d",b[i]);
        printf("\n");
        printf("%d",a[c-1]);
    }
    else
    {
        printf("%d",b[0]);
        printf("\n");
        printf("%d",a[c-1]);
    }
       
}
