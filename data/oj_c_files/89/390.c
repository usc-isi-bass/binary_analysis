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
int n,a[300000],i,j,k,b[300000];
scanf("%d\n",&n);
for(i=1;i<n+1;i++)
{a[i-1]=i;
b[i-1]=0;}
scanf("%d %d\n",&k,&j);
for(;!(k==0&&j==0);)
{
a[k]=0;
b[j]++;
scanf("%d %d\n",&k,&j);
}
int f=1;
for(i=0;i<n;i++)
{
 if(a[i]!=0&&b[i]==n-1)
 {
 printf("%d\n",a[i]-1);
 f=0;
 }
}
if (f==1)
printf("Not Found");
getchar();getchar();
}