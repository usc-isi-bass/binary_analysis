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
	int m,n,i,j,r,k,s=0,t,w=0;
	int a[500],b[500];
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		j=i;
		k=0;
		while(j>0)
		{
			r=j%10;
			j=j/10;
			k=10*k+r;
		}
		if(k==i)
		{
			a[s]=i;
			s++;
		}
	}
	for(i=0;i<s;i++)
	{
		t=0;
		for(j=2;j<=sqrt(a[i]);j++)
		{
			if(a[i]%j==0) t++; 
		}
		if(t==0) 
		{
			b[w]=a[i];
			w++;
		}
	}
	
	if(w==0) printf("no\n");
	else 
	{
		for(i=0;i<w-1;i++) printf("%d,",b[i]);
	printf("%d\n",b[w-1]);
	}

}