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
   char str[257],substr[257],rep[257];
   int i,j=0,m,n,g=0;
   scanf("%s",str);
   scanf("%s",substr);
   scanf("%s",rep);
   m=strlen(str);
   n=strlen(substr);
   for(i=0;i<m;i++)
	   if(str[i]==substr[j]&&g<n)
	   {
		   j++;
           g++;
	   }
	   else if(g>=n)
		   break;
	   else {g=0;j=0;}
   if(g==n)
	   for(j=0,i=i-n;j<n;j++,i++)
	   {
		   str[i]=rep[j];
	   }
   printf("%s",str);
   return 0;
}
