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
int n,i,j,flag;
flag=0;
int a[10000];
int b[10000]={0};
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]%2==1)
b[a[i]]=1;
}
for(i=1;i<10000;i++)
{
if(b[i])
{
 if(flag)
{
printf(",%d",i);
}
else
{
printf("%d",i);
flag=1;
}
}
}
}
