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
	int le,max,s,i,j,k,t;
	char a[1500]="\0";	
	scanf("%s",a);
	le=strlen(a);
	max=0;
	s=0;
	t=0;
	while(a[t]!=',')
	{
		max=max*10+a[t]-'0';
		t++;
	}
	j=0;
	for(i=t;i<=le-1;i++)
	{
		if(a[i]!=',')
			k=1;
		else 
		{
			if(j>max) 
			{
				if(max>s) s=max;
				max=j;
			}
			if((j>s)&&(j!=max)) s=j;
	     	j=0;
	    	k=0;
		}
		if(k==1) j=j*10+(a[i]-'0');
	}
	if(j>max) 
	{
		if(max>s) s=max;
		max=j;
	}
	if((j>s)&&(j!=max)) s=j;
	if(s==0) printf("No\n"); else printf("%d\n",s);
}
