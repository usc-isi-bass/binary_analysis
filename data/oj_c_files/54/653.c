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
	int i,k,j,n,test,a[50];
	scanf("%d%d",&n,&k);
    for(i=n+k;;i=i+n)
	{
		    a[0]=i;
	    	for(j=0;j<n-1;j++)
			{
			    test=n*a[j]-k+n*k;
			    if(test%(n-1)!=0)
				{
				  j=0;
			      break;
				}
		     	else
				a[j+1]=test/(n-1);
			}

		    if(j==n-1){
			printf("%d\n",a[n-1]);
			break;
			}
	}

}