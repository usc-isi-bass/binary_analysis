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
	char id[100][10],a[10];
	int n,i,j;
	int age[100],b;
	scanf("%d ",&n);
	for(i=0;i<n;i++)
	{
		scanf(" %s %d",&id[i],&age[i]);
	}
	
	for(j=n-1;j>0;j--)
	{
		for(i=n-1;i>0;i--)
		{
			if(age[i]>=60&&age[i-1]>=60)
			{
				if(age[i]>age[i-1])
				{
					strcpy(a,id[i]);b=age[i];
					strcpy(id[i],id[i-1]);age[i]=age[i-1];
					strcpy(id[i-1],a);age[i-1]=b;
				}
			}
			if(age[i]>=60&&age[i-1]<60)
			{
					strcpy(a,id[i]);b=age[i];
					strcpy(id[i],id[i-1]);age[i]=age[i-1];
					strcpy(id[i-1],a);age[i-1]=b;
			}
		}
	}

	for(i=0;i<n;i++)
	{
		if(i==0) printf("%s",id[i]);
		else printf("\n%s",id[i]);
	}

	return 0;

}