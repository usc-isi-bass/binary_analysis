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
    int i,j=1,k=0,n,m,count=0,sz[N];
	while(1)
	{
       scanf("%d%d", &n,&m);
       if(m==0&&n==0) break;
	   else
	   {
		   if(n==1){j=1;}
		   else
           {
			   j=1;
			   for(i=2;i<=n;i++)
			   {
                  j=(j+m-1)%i+1;
			   }
		   }
		  count++;
		  sz[k]=j;
		  k++;
	   }
    } 
	for(k=0;k<count;k++)
	{
		printf("%d\n",sz[k]);
	}
	
	return 0;
}