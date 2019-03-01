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
	int n,a,b,cout=0,r=0,sz[100]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90)
		{
			sz[r]++;
		}
		else
			r++;
	}
	int max=0;
	for(int j=0;j<100;j++){
		if(sz[j]>max)
			max=sz[j];
	}
	printf("%d\n",max);
	return 0;
}
