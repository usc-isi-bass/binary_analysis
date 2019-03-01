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



int main(int argc, char* argv[])
{
	int i,j,k=1,l,n,m,flag;
	int a[25000],b[25000],c[25000]={0};
	a[0]=3;
	c[3]=1;
	scanf("%d",&n);
	for(i=5;i<=n;i=i+2)
		for(j=3;j<i;j=j+2)
		{
			if(i%j==0)
				break;
			if(j>sqrt(i))
			{
				a[k]=i;
				c[a[k]]=1;
				k++;
				break;
				
			}
		}
	
	for(i=6;i<=n;i=i+2)
	{
		for(j=0;j<=k;j++)
		{
			if(c[i-a[j]]==1)
			{	printf("%d=%d+%d\n",i,a[j],i-a[j]);
			break;}
		}
	}
	return 0;
}

