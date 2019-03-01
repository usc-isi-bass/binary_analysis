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
   char s[40];
   gets(s);
   int i;
   for(i=0;i<strlen(s);i++)
   {
	   if(isdigit(*(s+i))!=0)
	   {
		   cout<<*(s+i);
	   }
	   else
	   {
		   if(isdigit(*(s+i-1))!=0)
		   cout<<endl;
	   }

   }

   return 0;
}