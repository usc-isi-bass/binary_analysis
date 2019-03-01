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
int n,i,l,k,j;
l=0;
scanf("%d\n",&n);
long int a[100001];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&k);//?????????
for(i=0;i<n;i++)
{
if(a[i]==k)
{for(j=i;j<n;j++)
a[j]=a[j+1];
l+=1;
i--;}
}
n-=l+1;
for(i=0;i<n;i++)
printf("%d ",a[i]);//????????????
                  printf("%d",a[n]);//????????
}