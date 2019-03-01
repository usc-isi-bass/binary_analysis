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

int s[50010]={1,1,0};
int main()
{
int i,j,n;
for(i=2;i<300;i++)
{
if(!s[i]);
j=i;
while(i*j<50010)
{
s[i*j]=1;j++;
}
}
scanf("%d",&n);
for(i=6;i<=n;i+=2)
{
for(j=2;j<=i/2;j++)
{
if(!s[j] && !s[i-j])
{
printf("%d=%d+%d\n",i,j,i-j);
break;
}
}
}
return 0;
}
