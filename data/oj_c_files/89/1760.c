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
	int n,a[25000][2],i,b[25000][2]={0},k=0;
	scanf("%d",&n);
	scanf("%d %d",&a[0][0],&a[0][1]);
	i=1;
	while(a[i-1][0]!=0||a[i-1][1]!=0)
	{
		scanf("%d %d",&a[i][0],&a[i][1]);
		i++;
	}
	i=0;
	while(a[i][0]!=0||a[i][1]!=0)
	{
		b[a[i][0]][0]++;
		b[a[i][1]][1]++;
		i++;
	}
	for(i=0;i<n;i++)
	{
		if(b[i][0]==0&&b[i][1]==n-1)
		{
			printf("%d\n",i);
			k++;
		}
	}
	if(k==0) printf("NOT FOUND");
}
