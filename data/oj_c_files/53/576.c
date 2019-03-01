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
int a[300],m=0,n,p=0;
scanf("%d",&m);
for(int i=0;i<m;i++)
{
scanf("%d",&(a[i]));
}
printf("%d",a[0]);
for(n=1;n<m;n++)
{
p = 0;
for(int j=0;j<=n-1;j++)
{
if(a[n]==a[j])
{
p++;
}
}
if(p==0)
printf(",%d",a[n]);
else
continue;
}
return 0;
}
