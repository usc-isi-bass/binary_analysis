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
int n,i,j;
double s=0,max=0,a[100],t;
cin>>n;
for(i=0;i<n;i++)
{
  cin>>a[i];
  s+=a[i];
}
s/=n;
for(i=0;i<n;i++)
  for(j=0;j<n-1;j++)
    if(a[j]>a[j+1])
    {
       t=a[j];
       a[j]=a[j+1];
       a[j+1]=t;               
    }

if(s-a[0]==a[n-1]-s)
  cout<<a[0]<<','<<a[n-1];
else if(s-a[0]>a[n-1]-s)
  cout<<a[0];
else
  cout<<a[n-1]; 

return 0; 
}
