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
	int n[500],m[500];
	int number,i,k,e,p;
	scanf("%d",&number);
	i=0;
	k=0;
	while(i<number)
	{
		scanf("%d",&n[i]);
		if(n[i]%2==1)
		{
			m[k]=n[i];
			k++;
		}
		i++;
	}
	for(i=1;i<=k;i++)
	{
		for(p=0;p<k-i;p++)
		{
			if(m[p]>m[p+1])
			{
				e=m[p+1];
				m[p+1]=m[p];
				m[p]=e;
			}
		}
	}
	for(i=1;i<=k;i++)
	{		
		if(i==1)
		{
			printf("%d",m[i-1]);
		}else
		{
			printf(",%d",m[i-1]);
		}
	}
	return 0;
}