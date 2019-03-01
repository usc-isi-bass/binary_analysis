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
int a[300],i,j=0,k,l,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d ",&a[i]);}
printf("%d",a[0]);
for(i=1;i<n;i++)
{while(a[i]!=a[j]) j++;if(j==i){printf(",%d",a[i]);}
j=0;}
}
