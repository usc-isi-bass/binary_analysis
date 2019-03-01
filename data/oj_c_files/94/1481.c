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
	int n,c[M],odd[M];
	int i,j,*p,*q,m=0,temp;
	scanf("%d",&n);
	p=c;
	q=odd;
	for(i=0;i<n;i++,p++)
	{
		scanf("%d",p);
		if(*p%2!=0)
		{
			*q=*p;
			q++;
			m++;
		}
	}
	for(j=1;j<m;j++)
	{
		for(i=0;i<m-j;i++)
		{
			if(odd[i]>odd[i+1])
			{
				temp=odd[i];
				odd[i]=odd[i+1];
				odd[i+1]=temp;
			}
		}
	}
	printf("%d",odd[0]);
	for(i=1;i<m;i++)
	printf(",%d",odd[i]);
	
	return 0;
}
				
				



