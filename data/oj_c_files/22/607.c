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
{   int a,c[300];
    scanf("%d",&c[0]);
	int n=1;
	while(scanf(",%d",&a))
	{   c[n]=a;
	     n++;
	}
	if(n==1) printf("No");
	else
	{ int i,j,t;
	  for(i=0;i<n-1;i++)
		  for(j=0;j<n-1-i;j++)
			  if(c[j]<c[j+1])
			  {	  t=c[j];
			      c[j]=c[j+1];
				  c[j+1]=t;
			  }
	  for(i=1;i<n;i++)
	  {	 if(c[i]!=c[i-1])
		  {
		   printf("%d",c[i]);
		   break;
	  }
	  }
	  if(c[0]==c[n-1])	   
	  printf("No");
	  
		  
		 
		   
	
	} 

}