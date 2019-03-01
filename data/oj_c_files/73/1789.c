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
{
int a[5][5],i,j,k,l=0,t=0;
int (*p)[5];
p=a;
for(i=0;i<5;i++)
for(j=0;j<5;j++)
scanf("%d",(*(p+i)+j));
for(i=0;i<5;i++)
{for(j=0;j<5;j++)
{t=0;
for(k=0;k<5;k++)
{if(a[i][j]<a[i][k])
t--;}
for(k=0;k<5;k++)
{if(a[i][j]>a[k][j])
t--;}
if(t==0)
{printf("%d %d %d",i+1,j+1,a[i][j]);
l--;}
}}
if(l==0)
printf("not found");
}

