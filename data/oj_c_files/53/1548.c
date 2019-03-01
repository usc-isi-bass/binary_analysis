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
{int n,i=1,j=0,m=0;
scanf("%d\n",&n);
int a[n];
scanf("%d",&a[0]);
while(i<n)
{scanf(" %d",&a[i]);i++;}
printf("%d",a[0]);i=1;
while(i<n)
{ j=i-1;m=0;  while(j>=0)
   {if(a[i]==a[j])m=1;j--;}
   if(m==0)printf(",%d",a[i]);i++;}
return 0;
}       