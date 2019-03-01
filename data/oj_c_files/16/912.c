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

main()
{
int n,i=0,j;
int a[5];
scanf("%d",&n);
for(;n>0;) // ? n>0 ?? a>0 
{
a[i]=n%10;
i++;
n=n/10;
}
for(j=0;j<i;j++)
printf("%d",a[j]);
getchar();
getchar();
}
