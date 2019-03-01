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

int main(){
	int n,k[101],i,q[101],j=0,m=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&k[i],&q[i]);
	}
	for(i=0;i<n;i++)
	{
		if(k[i]<=140&&k[i]>=90&&q[i]<=90&&q[i]>=60)
		{
			j++;
		}
		else
		{
			if(j>m)
			{
				m=j;
				j=0;
			}
			else
			{
				j=0;
			}
		}
	}
	if(j>m)
			{
			printf("%d",j);
			}
			else
			{
printf("%d",m);
			}
	return 0;
}
