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

int main ()
{
void paixu(int *p,int k);
int tian [2010],qi[2010];
int i,j,k,n,win,equal;
for (;;)
{
scanf("%d",&n);
if (n!=0)
{
for (int i=0;i<n;i++)//????i?j???????????? ??????? 
scanf("%d",&tian[i]);
for (int i=0;i<n;i++)    
scanf("%d",&qi[i]);
paixu(tian,n);
paixu(qi,n);
int win=0,equal=0;

for(int i=0;i<n;i++)//??????????????????????????????0???????????? 
{
for (int j=n-1;j>=0;j--)
{
if (tian[i]>qi[j])
{
if (tian[i]!=-1&&qi[j]!=-1)
{
win ++;
tian[i]=-1;
qi[j]=-1;
break;//break???????????for?? 
}
}
}
}
for (int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if (tian[i]==qi[j])
{
if (tian[i]!=-1&&qi[j]!=-1)
{
equal++;
tian[i]=-1;
qi[j]=-1;
break;
}      
}       
}
}
printf("%d\n",(win-(n-win-equal))*200);
}
else
break;
}
}         
void paixu(int*p,int k)//??????????????*p?????? 
{
int i,j,t;
for(i=0;i<k-1;i++)
for(j=0;j<k-1-i;j++)
if (p[j]>p[j+1])
{
t=p[j];
p[j]=p[j+1];
p[j+1]=t;
}            
}
