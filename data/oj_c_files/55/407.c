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
	long int a,n=0,b,i,k,j,c,r;
	char x[100],y[100];
	scanf("%ld%s%ld",&a,x,&b);
	
	k=strlen(x);
	for(i=0;i<k;i++)
	{
		
		if(x[i]>='0'&&x[i]<='9')
		{
			c=x[i]-48;
			for(j=1;j<=k-1-i;j++)
				c=c*a;
			n=n+c;
		}
		else if(x[i]>='A'&&x[i]<='Z')
		{
			c=x[i]-55;
			for(j=1;j<=k-1-i;j++)
				c=c*a;
			n=n+c;
		}
		else 
		{
			c=x[i]-87;
			for(j=1;j<=k-1-i;j++)
				c=c*a;
			n=n+c;
		}
	}
    i=0;
	do
	{
		r=n%b;
		if(r>=0&&r<=9)
			y[i]=r+48;
		else y[i]=r+55;
		n=n/b;
		i=i+1;
	}while(n!=0);

	for(k=i-1;k>=0;k--)
		printf("%c",y[k]);
		

}
		

