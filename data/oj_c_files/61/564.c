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

int p(int m)
{
 	int i,a[22];
 	a[1]=1;
    a[2]=1; 
    if(m>2)
	{ 
        for(i=3;i<=m;i++)
	    {
            a[i]=a[i-1]+a[i-2];
	    }	
	} 
	return a[m]; 
} 
int main()
{
 	int m,n,i;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	 	scanf("%d",&m);
		printf("%d\n",p(m));
	}	  
 	return 0;
} 