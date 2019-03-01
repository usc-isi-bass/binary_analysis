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
   char *p,str[110];
   int len,i;
   p=str;
   gets(str);
   len=strlen(str);
   for(i=0;i<len;i++)
   {
     if(i==0)
	    cout<<*(p+i);
	 else 
	 {
		 if((*(p+i)==' ' && *(p+i-1)!=' ') || (*(p+i)!=' '))
		 cout<<*(p+i);
		 else continue;
	 }
   }
   return 0;
}