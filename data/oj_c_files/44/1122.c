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
	int r(int num);
	int i,n;
	for(i=0;i<6;i++)
	{
		scanf("%d",&n);
		printf("%d\n",r(n));
	}
}
int r(int n)
{
	int k,i,m=0,w=1;
	int digit[10];
	if(n<0)
	{
		n=abs(n);
		for(k=0;n!=0;k++)
		{
			digit[k]=n%10;
			n/=10;
		}	
		for(i=k-1;i>=0;i--)
		{
			m+=digit[i]*w;
			w*=10;
		}
		m=-m;
		return m; 
	}
	else
	{
		for(k=0;n!=0;k++)
		{
			digit[k]=n%10;
			n/=10;
		}	
		for(i=k-1;i>=0;i--)
		{
			m+=digit[i]*w;
			w*=10;
		}	
		return m;
	}

}