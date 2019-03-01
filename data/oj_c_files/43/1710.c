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
	int n,i,j,x,y,t;
	scanf("%d",&n);
	for(i=2;i<=(n/2.0);i++)
	{	
	  for(x=2;x<i;x++)
		{
		      y=i%x;
	    	if(y==0) break;
		}
   	if(y!=0)
		{	
		j=n-i;
		for(t=2;t<=j/2.0;t++)
		{	y=j%t;
		    if(y==0) 
			break;
		}
		if(y!=0)
			printf("%d %d\n",i,j);
		}
	}
	return 0;			
}