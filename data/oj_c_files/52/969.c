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

void move(int*p,int n,int m)
{
	int i,end;
	end=*(p+n-1);
	for(i=n-1;i>=0;i--)
		*(p+i)=*(p+i-1);
	*p=end;
	m--;
	if(m>0)
		move(p,n,m);
	else if(m==0)
	{
		for(i=0;i<n;i++)
		{
	    	if(i==0)
	        	printf("%d",*(p+i));
	    	else
		    	printf(" %d",*(p+i));
		}
	}

}

	
void main()
{
	int n,m,i,a[100],*p;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=a;
	move(p,n,m);
	
}



