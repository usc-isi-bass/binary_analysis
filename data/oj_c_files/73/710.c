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
int a[6][6];
int i,j,x,y,max,k,s=0;
for(i=1;i<6;i++)
for(j=1;j<6;j++)
scanf("%d",&a[i][j]);
for(i=1;i<6;i++)
{
    max=1;
for(j=1;j<6;j++)
{
if(a[i][j]>a[i][max])
max=j;
}
for(k=1;k<6;k++)
if(a[k][max]<a[i][max])
break;
if(k==6)
{
printf("%d %d %d\n",i,max,a[i][max]);
s++;
}
}
if(s==0)
printf("not found");
getchar();
getchar();
}
