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
	int m,n,i,j,p,sum=0,q=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(j==i)
		{
			sum=0;
			p=i;
			while(p>0)
			{
				sum=sum*10+p%10;
				p=p/10;
			}
			
			if(sum==i)
			{	q=q+1;
			  if(q==1)
				printf("%d",i);
			  if((q!=1)&&(q!=0))
				  printf(",%d",i);
				
			}
		}
	}

    if(q==0)
		printf("no");
}
