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

//*******************//
//*???????   *//
//*?????       *//
//*???2010.12.10 *//
//*******************//
int main()
{
 int a[100];
 int n,m,i,counter=0;
 cin>>n>>m;
 for(i=0;i<n;i++)
 {
   cin>>a[i];
 }
 int *p;
 for(p=a+n-m;;p++)
 {
   if(p!=a+n-1)
   {
	   if(counter!=n-1)
	     cout<<*p<<" ";
	   else
         cout<<*p;
   }
   else
   {
	   cout<<*p<<" ";
	   p=a-1;
   }
   counter++;
   if(counter==n)
	   break;
 }
 return 0;
}