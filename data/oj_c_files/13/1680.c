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
   int a[100];
   for (int i=2;i<=100;i++)
   {
	   a[i]=0;
   }
   int n;
   cin>>n;
   int b;
   cin>>b;
   cout<<b;
   a[b]=1;
   for (int i=2;i<=n;i++)
   {
	   //int b;
	   cin>>b;
	   if (a[b]==0)
	   {
		   a[b]=1;
		   cout<<' '<<b;
	   }
   }
}