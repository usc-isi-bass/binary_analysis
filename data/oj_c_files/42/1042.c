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

//?????????????
//????????
//?????2011?10?27?

int main()                                     //?????
{
   int j,n,k,i;                                 
   cin>>n;
   int a[100000];
   for(i=0;i<n;i++)
	   cin>>a[i];            //????
   cin>>k;
   int t=0;
   for(i=0;i<n-t;)     //?i??n-??????
   {
if(a[i]==k) 
{                   //????????
for(j=i;j<n-t;j++)
a[j]=a[j+1];         //??
t++;                //????????????i
}
else
 i++;              //?????????
  }
for(int i=0;i<n-t-1;i++)
 cout<<a[i]<<" ";               //????
   cout<<a[n-t-1];
   return 0;
}
