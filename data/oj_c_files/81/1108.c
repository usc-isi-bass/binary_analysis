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
int n,a[5][5],i,j,m,k;
for(i=0;i<5;i++)
{for(j=0;j<5;j++){
scanf("%d",&a[i][j]);}}


scanf("%d %d",&n,&m);
if(m>=0&&n<5&&m<5&&n>=0)
{
for(i=0;i<5;i++)
{k=a[m][i];a[m][i]=a[n][i];a[n][i]=k;}
for(i=0;i<5;i++)
{for(j=0;j<5;j++){
if(j<=3)
printf("%d ",a[i][j]);
else printf("%d\n",a[i][j]);}}
return 1;}
else printf("error");


return 0;}
