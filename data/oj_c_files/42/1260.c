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
 int n,m,i,t,j;
 int a[100000]={0};
 cin>>n;
 for(i=0;i<n;i++)
  cin>>a[i];
 cin>>m;
 i=0;
 t=0;
 while(i<n-t)
  {if(a[i]==m)
    {t=t+1;
     for(j=i;j<n-t;j++)
      a[j]=a[j+1];
     }
  else i++;}
for(i=0;i<n-t-1;i++)
 cout<<a[i]<<" ";
 cout<<a[n-t-1]<<endl;
return 0;}

