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
	int n;
	int a[100000],b[100000];
	int i,j;
	scanf("%d",&n);	
	for(i=1;i<100000;i++)
	{
		if(i==1)
			b[i]=1;
		if(i==2)
			b[i]=1;
		if(i>2)
			b[i]=b[i-2]+b[i-1];
	}
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
	{
		j=a[i];
		printf("%d\n",b[j]);
	
	}



	return 0;
		
		
		
		
	


}
