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
int k;
scanf("%d",&k);
int *a=(int *)malloc(sizeof(int)*k);
int i,j;
for(i=0;i<k;i++)
scanf("%d",&a[i]);
int count[30]={0};
int max;
max=0;
for(i=k-2;i>=0;i--)
{
for(j=i+1;j<k;j++)
{
if(a[j]<=a[i]&&count[i]<count[j]+1)
count[i]=count[j]+1;
}
}
for(i=0;i<k;i++)
{
if(max<count[i])
max=count[i];
}
printf("%d",max+1);
free(a);
return 0;
}