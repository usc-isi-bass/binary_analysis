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



int n;
int h[30];
int len[30];

int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&h[i]);
	}
	len[0]=1;
	for(int i=1;i<n;i++)
	{
		len[i]=1;
		for(int j=0;j<i;j++)
		{
			if(h[j]>=h[i] && len[j]+1>len[i])
				len[i]=len[j]+1;
		}
	}
	int maxi=0;
	for(int i=0;i<n;i++)
		if(len[i]>maxi)
			maxi=len[i];
	printf("%d\n",maxi);
}