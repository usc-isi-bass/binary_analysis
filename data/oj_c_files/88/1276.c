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
	char str[40];;
	char *p=str;
	cin.getline (str,40);
   for  (;*p!='\0';p++)
   {
	   if (*p-'0'<=9&&*p-'0'>=0)
	   {cout<<*p;//???1-9?????????
	     if (*(p+1)-'0'>9||*(p+1)-'0'<0)
			 cout<<endl;//????????????????
	   }
   }
   return 0;
}
