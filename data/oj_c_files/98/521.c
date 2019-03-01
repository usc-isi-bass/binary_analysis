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
{  int n,i,j,k,t;
   char word[40];

   scanf("%d",&n);

   for(i=0,t=81;i<n;i++)
   {scanf("%s",word);
     k=strlen(word);
	 if(t-k-1>=0) 
	  { if(t==81) printf("%s",word);
		 else printf(" %s",word);
       t=t-k-1;
	  }
	 else  {printf("\n");
	        t=81-k-1;
		    printf("%s",word);}   
   }
     printf("\n");
    return 0;
}