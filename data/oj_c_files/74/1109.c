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
	int m,n,i,j,k,a=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		k=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)k=1;
		}
		if(k==0)
		{
			int temp,l,h=0;
			temp=i;
			while(temp>0)
			{ 
				l=temp%10;
				h=h*10+l;
				temp=temp/10;
			}
			if(i==h)
			{
				if(a==0)printf("%d",i);
				else printf(",%d",i);
				a++;
			}
		}
	}
	if(a==0)printf("no");
}