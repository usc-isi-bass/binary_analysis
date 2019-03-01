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
   char str[30];
   gets(str);
   char *str_pointer;
   str_pointer=str;
   int i,flag,count;
   flag=count=0;
   for(i=0;str[i];i++)
   {
	   if(str[i]>='0'&&str[i]<='9')
	   {
		 printf("%c",str[i]);
		 flag=0;
	   }
	   else if(flag==0)
	   {
		   printf("\n");
		   flag=1;
	   }
   }
   return 0;
}
	   
