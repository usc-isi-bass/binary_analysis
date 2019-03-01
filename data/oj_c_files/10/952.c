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

main()
{
	int n,i,j,max,m,k;
	scanf("%d",&n);
	static int hight[25],num[25];
	for(i=0;i<=n-1;i++)  scanf("%d",&hight[i]);
    num[0]=1;
	for(i=1;i<=n-1;i++)
	{
		for(j=i-1;j>=0;j--)
		{
			m=0;
			if(hight[j]>=hight[i])
			{
				m=num[j];
				break;
			}
		}
        if(j==-1) num[i]=1;
		for(k=j-1;k>=0;k--)
		{
			if(hight[k]>=hight[i])
			{
				if(num[k]>m) m=num[k];
			}
		}
		if(num[i]==0) num[i]=m+1;
	}
	max=num[n-1];
	for(i=n-2;i>=0;i--)
	{
		if(num[i]>max) max=num[i];
	}
	printf("%d\n",max);
	return 0;
}


