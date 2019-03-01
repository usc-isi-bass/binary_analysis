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
{int a[300],m[20],n[20],i,j,k,p,q,b,c,x[300],y,e;
for(k=0;;k++)
	{scanf("%d %d",&n[k],&m[k]);
if(m[k]==0)break;}
for(i=0;i<k;i++)
{ j=0;for(j=0;j<n[i];j++)
{a[j]=j+1;}
for(;n[i]>1;n[i]--)
{p=m[i]%n[i];
c=n[i]-p;
for(y=0,b=0;b<p-1;b++,y++)
{x[y]=a[b];}

for(e=0;p<n[i];e++,p++)
{a[e]=a[p];}
for(q=0;c<n[i]-1;c++,q++)
{a[c]=x[q];}}


printf("%d\n",a[0]);}}

