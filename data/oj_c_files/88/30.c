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
   int i,j=1;
   char a[31];
   cin.getline(a,31);
   for(i=0;i<31;i++)
   {
	   if(a[i]>=48&&a[i]<=57)
	   {
		   cout<<a[i];
		   j=0;
	   }
	   else
	   {
		   if(j==0)
		   {
			   cout<<endl;
			   j=1;
		   }
	   }
   }
   return 0;
}
	  



