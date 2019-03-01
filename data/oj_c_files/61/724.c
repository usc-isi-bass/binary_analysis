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

	int a,b[30],n,i=0,j=2,sum=2;
     scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	 scanf("%d",&a);
     b[0]=1;
	 b[1]=1;
	
    for(j=2;j<a;j++)
	 {
	 b[j]=b[j-1]+b[j-2];
	 
	}
	printf("%d\n",b[j-1]);
	 }
	    
	return 0;
}
