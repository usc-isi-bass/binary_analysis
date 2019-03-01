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

int f(int *p,int n);
void main()
{
	int s[300],i=0,n,a,b,*p;
	char c;
	p=&s[0];
	scanf("%d",&s[0]);
    while((c=getchar())==',')
	{
		i++;
		scanf("%d",&s[i]);
	}
	n=i+1;
	if(n==1)
		printf("No\n");
	else
	{
		a=f(p,n);
		b=0;
	    for(i=0;i<n;i++)
		{
			if(s[i]<a&&s[i]>=b)
				b=s[i];
		}				
		if(b!=0)
			printf("%d\n",b);
		else
			printf("No\n");
	}
}
int f(int *p,int n)
{
	int i,k;
	k=*p;
	for(i=1;i<n;i++)
	{
		if(*(p+i)>=k)
			k=*(p+i);
	}
	return(k);
}
    