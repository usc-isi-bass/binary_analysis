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

main()
{

int i,j,k,c,n,prize,w,max;
int a[1001];
int b[1001];
for(;;)
{
       max=0;
scanf("%d",&n);
if(n==0)
break;
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(i=1;i<=n;i++)
scanf("%d",&b[i]);
for(j=1;j<=n;j++)
{
for(i=1;i<j;i++)
{
if(b[j]>b[i])
{
c=b[j];
for(k=j;i<k;k--)
b[k]=b[k-1];
b[i]=c;
}
}
}
for(j=1;j<=n;j++)
{
for(i=1;i<j;i++)
{
if(a[j]>a[i])
{
c=a[j];
for(k=j;i<k;k--)
a[k]=a[k-1];
a[i]=c;
}
}      
}
for(i=1;i<=n;i++)
{
                 
                 prize=0;
for(k=1;k<=n;k++)
{
if(a[k]>b[k])
prize=prize+200;
else if(a[k]<b[k])
prize=prize-200;
}
w=a[n];
for(j=n;j>1;j--)
a[j]=a[j-1];
a[1]=w;
if(i==1)
max=prize;
if(prize>=max)
max=prize;
}
printf("%d\n",max); 
       }
       }

