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

void main()
{int i,j=0,k,x,y,a[300]={0},b[300],h=0;
char c[20000];
scanf("%s",c);
y=strlen(c);
for(i=0;i<y;i++)
{if(c[i]!=',')
a[j]=a[j]*10+c[i]-'0';
else
j++;}
for(i=0;i<=j;i++)
{for(k=0;k<j-i;k++)
if(a[k]>a[k+1])
{x=a[k];
a[k]=a[k+1];
a[k+1]=x;}}

for(i=j-1;i>=0;i--)
{b[i]=a[i+1]-a[i];
if(b[i]>0)
{printf("%d",a[i]);
h=1;
break;}}
if(h==0)
printf("No");
}