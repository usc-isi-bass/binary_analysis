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
    int m,n,i,j,k,flag,a[100]={0},start=0,t=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		flag=0;
		for(j=2;j<=sqrt(n);j++)
			if(i%j==0)
			{
				flag=1;
				break;
			}
			if(!flag)
			{
				k=i;
				for(j=0;k>0;j++)
				{
					a[j]=k%10;
					k=(k-a[j])/10;
				}
				for(k=0;k<j/2;k++)
					if(a[k]!=a[j-k-1])
					{
						flag=1;
						break;
					}
			}
			if(!flag)
			{
				if(!start){
					printf("%d",i);
					start=1;
				}
				else printf(",%d",i);
				t++;
			}
			
	}
	if(t==0)printf("no");
	return 0;
}
