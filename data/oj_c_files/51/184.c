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
char c[500]={0},g[500][5]={0};
int i=0,j=0,m,n,y[500]={0},num[500]={0},k=0;
scanf("%d\n",&n);
gets(c);
j=strlen(c)-n+1;
for(i=0;i<j;i++)
{
   for(k=0;k<n;k++)
   {g[i][k]=c[i+k];}
}
i=0;
for(i=0;i<j;i++)
{
  if(y[i]==0)
  {
   for(k=i+1;k<j;k++)
    {
     if(strcmp(g[k],g[i])==0)
     {num[i]++;y[k]=1;}
    }
  }
}
i=1;m=num[0];
for(i=1;i<j;i++)
{
if(y[i]==0)
{if(num[i]>m) m=num[i];}
}
i=0;
if(m==0)
printf("NO");
else
{printf("%d\n",m+1);

for(i=0;i<j;i++)
{
 if(y[i]==0)
  {
   if(num[i]==m)
   puts(g[i]);
  }
}}
return 0;
}

