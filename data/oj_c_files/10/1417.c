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
int h[25],b[25],k,i,j,m,n;
scanf ("%d",&k);
for (i=0;i<k;i++)
{
  scanf ("%d",&h[i]);  
  b[i]=1;
}
for (j=k-1;j>=0;j--)
  for (m=j+1;m<k;m++)
    {
       if (h[j]>=h[m]&&b[j]<(b[m]+1))
          b[j]=b[m]+1;           
    }
for (i=0;i<k-1;i++)
    b[i+1]=(b[i]>b[i+1])?b[i]:b[i+1];
n=b[k-1];        
printf ("%d",n);        
} 