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

int main () 
{
	int i,n,nl;
	int nld[4]={0,0,0,0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&nl);
		if(nl<=18)
			nld[0]++;
		   
		if(nl>18&&nl<36)
			nld[1]++;
		    
		if(nl>35&&nl<61)
			nld[2]++;
		   
		if(nl>60)
			nld[3]++;
		   
	}
    printf("1-18: %.2lf%%\n",(100.0*nld[0])/n);
	 printf("19-35: %.2lf%%\n",(100.0*nld[1])/n);
	  printf("36-60: %.2lf%%\n",(100.0*nld[2])/n);
	   printf("60??: %.2lf%%\n",(100.0*nld[3])/n);
	return 0;
}