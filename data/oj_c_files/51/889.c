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



int main( )
{
int n;
char s[600];
scanf("%d",&n);
scanf("%s",s);
int i,j,k,a[600];
for(i=0;i<strlen(s)-n+1;i++)
{
a[i]=1;
for(j=i+1;j<strlen(s)-n+1;j++)
{
for(k=0;k<n;k++)
if(s[j+k]!=s[i+k])
break;
if(k==n)
a[i]++;
}
}
int m=0;
for(i=0;i<strlen(s)-n+1;i++)
if(a[i]>m)
m=a[i];
if(m<2)
printf("NO\n");
else
{
printf("%d\n",m);
for(i=0;i<strlen(s)-n+1;i++)
{
if(a[i]==m)
{
for(j=i;j<i+n;j++)
printf("%c",s[j]);
printf("\n");
}
}
}
return 0;
}