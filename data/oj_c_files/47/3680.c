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


int main(int argc, char* argv[])
{
	int n,j,i,a[100];
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
	  for(j=n-1;j>=1;j--)
	 {
		  printf("%d ",a[j]);
		  
	  }
	 
	printf("%d\n",a[0]);
	
	   
	return 0;
}

