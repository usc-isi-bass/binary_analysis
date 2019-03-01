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
	int sz[MAX], n, k, i, j=1;
      	scanf("%d %d", &n, &k);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d ", &sz[i]);
	}
	for(i=0;i<n-1;i++,j=i+1)
	{
	  while(j<=n-1)
	   {       
		if(sz[i]+sz[j]==k)
		{         
	                   printf("yes");
                            return 0;
		}
                 j++;
             }         
           }
          printf("no");
}        
