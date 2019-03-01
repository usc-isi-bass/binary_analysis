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
	int a[10000]={0},b[10000]={0},i,j,k,p=0,n;
	scanf("%d",&n);
	while(1)
	{
		
		scanf("%d %d",&i,&j);
		if(i==0&&j==0)break;
		else
		{
		a[i]++;
		b[j]++;
		}

	}
	for(k=0;k<n;k++)
	{
		if(a[k]==0&&b[k]==n-1)
		{printf("%d",k);p++;break;}

	}
	if(p==0)printf("NOT FOUND");
	return 0;

}