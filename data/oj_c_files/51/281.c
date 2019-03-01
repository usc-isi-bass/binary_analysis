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
	char str[600],str1[10];
	int n,a[500]={0},i,j,k,l,m,p,temp,max;
	scanf("%d",&n);
	scanf("%s",&str);
	l=strlen(str);
	for(i=0;i<=l-n-1;i++)
	{
		a[i]=1;
		for(j=0;j<=n-1;j++)
		{
			str1[j]=str[i+j];
		}
		for(k=(i+1);k<=l-n;k++)
		{
			for(m=k,p=0,temp=0;p<=n-1;m++,p++)
			{
				if(str[m]==str1[p])
				{
					temp++;
				}
				else
				{
					break;
				}
			}
			if(temp==n)
			{
				a[i]=(a[i]+1);
				a[k]=-5000;
			}
		}
	}
	max=a[0];
	temp=1;
	for(i=1;i<=l-n-1;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]==max)
		{
			temp++;
		}
	}
	if(max!=1){
	printf("%d\n",max);
	for(i=0;i<=l-n;i++)
	{
		if(a[i]==max)
		{
			for(p=i;p<=i+n-1;p++)
			{
				printf("%c",str[p]);
			}
			printf("\n");
		}
	}
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}