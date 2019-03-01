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
   int i,j,t,k;
   scanf("%d\n",&t);
   for(i=0;i<t;i++)
   {
	   int a[256],len,m=0;
	   char c[10000];
	   memset(a,0,sizeof(a));
	   scanf("%s",c);
	   len=strlen(c);
	   for(j=0;j<len;j++)a[c[j]]++;
	   for(j='a';j<'z';j++)
	   {
	   if (a[j]==1) m++;
		}
        if(m==0)
	   {
		   printf("no");
		   return 0;
	   }
	   for(j=0;j<len;j++)
	   { 
	       if(a[c[j]]==1)
		   {
				   printf("%c\n",c[j]);
				   goto loop;	   
		   }
	   }
       loop:
	   continue;
   }
}