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
int a[5][5];
int i,j,p;

int x1,x2;
int c=0,m=0,tmp=0;



for(i=0;i<5;i++)
{ 
for(j=0;j<5;j++)
{
scanf("%d",&a[i][j]);
}
}

for(i=0;i<5;i++)
{ 
tmp = 0; 
for(j=0;j<5;j++)
{
if(a[i][j]>tmp)
{ 
tmp=a[i][j];
x1=i;
x2=j;
}
}

m=0; 
for(p=(x1-1);p>=0;p--)
{  
if(a[p][x2]<a[x1][x2])
{ 
m++;
break;
}
}
for(p=(x1+1);p<5;p++)
{   
if(a[p][x2]<a[x1][x2])
{
m++;
break;
}
}
if(m==0)
{  
printf("%d %d %d\n",x1+1,x2+1,a[x1][x2]); 
c++;
}
}

if(c==0)
{  
printf("not found");
}

return 0;
}