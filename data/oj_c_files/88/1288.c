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
   char a[40];
   char *p=a;
   cin.get(a,40);
   for(;*p!='\0';p++)
   {
	  if(*p>='0'&&*p<='9')
	  {
		  for(;*p>='0'&&*p<='9';p++)
			  cout<<*p;
		  cout<<endl;
	  }
   }
   return 0;
}