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

void main()
{
   char s[4000],*ps,ss[200][20];
   memset(ss,0,200);
   int max,min,i=0;
   int k=0;
   gets(s);
   for(ps=s;*ps!='\0';ps++)
   {
    if(*ps!=' ')
    {
		if(*ps!=',' )
		{
		ss[k][i]=*ps;
		i++;
		}
    }
    else{
     k++;
     i=0;
    }
   }
    max=0;
    min=0;
    for(i=0;i<=k;i++)
    {
     if(strlen(ss[i])>strlen(ss[max]))
     max=i;
     else if(strlen(ss[i])<strlen(ss[min]))
     min=i;
    }
   puts(ss[max]);
   puts(ss[min]);
} 
