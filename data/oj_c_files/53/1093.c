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
	int i,n,j,f=0,a[300],m=1,b[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d,",a[0]);
	for(i=1;i<n;i++)
	{   
		f=0;
		for(j=i-1;j>=0;j--)
		{
			
			if(a[i]==a[j])
				f++;
		}
		if(f!=0)
		{
		    continue;
		}
	
		if(f==0)
		{
			b[m]=a[i];
			m++;
		}
		
	}
    for(i=1;i<m-1;i++)
		printf("%d,",b[i]);
	printf("%d",b[m-1]);
    return 0;
}
