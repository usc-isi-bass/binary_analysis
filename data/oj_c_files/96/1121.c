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
char a[100];
int b[99],d[99];
int m,i,n=0;
scanf("%s",a);
m=strlen(a);
if(m==1)
{printf("0\n%d",(a[0]-'0'));}
else 
if(m==2)
{printf("%d\n%d",(10*(a[0]-'0')+(a[1]-'0')-(10*(a[0]-'0')+(a[1]-'0'))%13)/13,(10*(a[0]-'0')+(a[1]-'0'))%13);}
else
{d[0]=((a[0]-'0')*10+(a[1]-'0'))%13;
b[0]=((a[0]-'0')*10+(a[1]-'0')-d[0])/13;
for(i=1;i<=m-2;i++)
{d[i]=(d[i-1]*10+(a[i+1]-'0'))%13;
b[i]=(d[i-1]*10+(a[i+1]-'0')-d[i])/13;}
if(b[0]!=0)
printf("%d",b[0]);
for(i=1;i<=m-3;i++)
printf("%d",b[i]);
printf("%d\n",b[m-2]);
printf("%d",d[m-2]);}
}