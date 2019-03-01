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
  int i,j,n,a,b,m;
  char c[100],d[100];
  scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%s",c);
	 scanf("%s",d);
	 a=strlen(c);
	 b=strlen(d);
	 m=b-1;
	 for(j=a;j>a-b;j--)
	   {
	     
	      if(c[j-1]>=d[m])
		    {
			  c[j-1]=c[j-1]-d[m]+48;
			  m--;
			}
			else 
			{
			  c[j-1]=c[j-1]+10-d[m]+48;
			  c[j-2]--;
			  m--;
			}
	   }
	 j=0;
	 while(c[j]==0)
		 j++;
      for(;j<a;j++)
	  printf("%c",c[j]);
	  printf("\n");

  }
  
return 0;
}