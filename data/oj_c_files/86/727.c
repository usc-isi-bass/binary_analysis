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
	int m,n,t,j,i,s=60,a[1000];
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		if(60>=(a[n-1]+3*n)) printf("%d\n",60-3*n);
		else {
			for(i=0;i<n;i++)
		{
			if(s>a[i]) 
			{s=s-3;
			if(s<a[i]) 
			{s=a[i]; break;}}
			if(s<a[i]) 
			{s=60-3*i;break;}
		}
			printf("%d\n",s);
		}
		s=60;
	}

}