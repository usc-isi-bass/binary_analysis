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
   
	int n,i;
	int m,k;
	int a[60];
	int count[100]={60};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		count[i]=60;
		scanf("%d",&m);
		if(m!=0) 
		{
			for(k=1;k<=m;k++)
			{
				scanf("%d",&a[k]);
				if((a[k]+3*k-3)<57)
					count[i]=count[i]-3;
				else if((a[k]+3*k-3)<63)
				{
					count[i]=a[k];
				}
			}
		}
		printf("%d\n",count[i]);
	}
	return 0;
}