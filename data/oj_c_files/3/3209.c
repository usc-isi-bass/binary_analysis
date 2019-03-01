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
	int sz[1000];
	int i,n,m,a,j,b,c,d,e,k;
	scanf("%d%d",&n,&m);
    for(i=0; i<n; i++)
	{
		scanf("%d", &(sz[i]));
	}
b=0;
   for(i=0; i<n; i++)
   {     
	   for(k=0; k<n; k++)
	   {
		   a=sz[k]+sz[i];
	        if(a==m)
                 b=b+1;
           }
   }
  if (b>0)
  printf("yes");
  else if (b==0)
	  printf("no");
	return 0;
}