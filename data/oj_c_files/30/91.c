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
	int n,m[100],i,sum=0,k,a,b,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{  
		k=i;
		m[i]=k;
		if(k%7==0)
			m[i]=0;
		else
		{a=k%10;
		b=(k/10)%10;
		c=(k/100)%10;
		if(a!=7&&b!=7&&c!=7)
			m[i]=k;
		else m[i]=0;}
		sum=sum+m[i]*m[i];
	}printf("%d",sum);
	
	
	
}