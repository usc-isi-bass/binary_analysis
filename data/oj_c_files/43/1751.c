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
int m;
int i,j,k;
scanf("%d",&m);
int s[2000];
s[0]=2;s[1]=3;
k=1;
for(j=3;j<10000;j++)
{
for(i=0;s[i]*s[i]<j;i++)
{
if(j%s[i]==0)
break;
}
if(s[i]*s[i]>j)
{
s[k]=j;
k++;
}
}
for(j=0;s[j]<=m/2;j++)
{
for(i=0;s[i]<=m;i++)
if(m==s[i]+s[j])
{
printf("%d %d\n",s[j],s[i]);
}
}

return 0;
}