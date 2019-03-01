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
   char word[100][100],a[100],b[100];
   int i=0;
   char tmp;

   while(scanf("%s",word[i])!=EOF)
   {
	   i++;
	   scanf("%c",&tmp);
	   if(tmp=='\n')
		   break;
   }
   scanf("%s%s",a,b);
   int j=0;
   if(strcmp(word[0],a)!=0)
   {
	   printf("%s",word[0]);
   }
   else 
   {
	   printf("%s",b);
   }
   for( j=1;j<i;j++)
   {
	    if(strcmp(word[j],a)!=0)
   {
	   printf(" %s",word[j]);
   }
   else 
   {
	   printf(" %s",b);
   }

   }
	return 0;
}
