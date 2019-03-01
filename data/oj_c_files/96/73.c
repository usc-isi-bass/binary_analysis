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
    char a[100],c[100];
    int l,b[100]={0};
    scanf("%s",a);
    l=strlen(a);
    for(int i=0;i<l;i++)
    b[i]=a[i]-'0';
    if(l!=1)
    {
    for(int j=0;j<l-1;j++)
    {
            a[j]=(b[j]*10+b[j+1])/13+'0';
            b[j+1]=(b[j]*10+b[j+1])%13;
    }
    a[l-1]='\0';
    if(a[0]=='0'&&l!=2)
    {
                 for(int k=1;k<l;k++)
                 a[k-1]=a[k];
    }
    printf("%s\n%d",a,b[l-1]);
    }
    else
    printf("0\n%d",b[0]);
    getchar();
    getchar();
}