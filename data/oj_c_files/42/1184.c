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
 int n,i;
 cin>>n;
 int a[100000];
 for(i=0;i<n;i++)
   cin>>a[i];
 int k,j=0;
 cin>>k;
 for(i=0;i<n-j;)
  {if(a[i]==k)
    {for(int t=i;t<n-j-1;t++)
       a[t]=a[t+1];
     j++;}
   else
    i++;}
 for(i=0;i<n-j-1;i++)
   cout<<a[i]<<" ";
 cout<<a[n-j-1]<<endl;
 return 0;
}
