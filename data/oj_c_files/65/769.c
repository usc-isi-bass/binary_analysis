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
int n,i=0,j=0,k;
int a[200],b[200];
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d%d",&a[i],&b[i]);
}
for(k=0,i=0,j=0;k<n;k++)
{
if(a[k]==0&&b[k]==1)
i++;
else if(a[k]==1&&b[k]==2)
i++;
else if(a[k]==2&&b[k]==0)
i++;
else if(a[k]==0&&b[k]==2)
j++;
else if(a[k]==1&&b[k]==0)
j++;
else if(a[k]==2&&b[k]==1)
j++;
else
continue;
}
if(i>j)
printf("A");
if(i<j)
printf("B");
if(i==j)
printf("Tie");
return 0;
}