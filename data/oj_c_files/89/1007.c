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
	long int n,a[20000],b[20000],count[10000]={0},i=0;
	scanf("%d",&n);
	scanf("%d%d",&a[0],&b[0]);
	while(a[i]!=0||b[i]!=0)
	{
		count[a[i]]=1;
		count[b[i]]--;
		i++;
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
		if(count[i]==(-n+1)) 
		{
			printf("%d\n",i);
			return 0;
		}
	printf("NOT FOUND\n");
	return 0;
}
