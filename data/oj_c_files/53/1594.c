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
	int a[300],n,i,j,b[300]={0},s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(!b[i])
		{
			if(s)printf(",");
			printf("%d",a[i]);
			s=1;}
		for(j=i+1;j<n;j++)
			if(a[i]==a[j])
				b[j]=-1;
	}
}
