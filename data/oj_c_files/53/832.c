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

void main()
{
	int n;
	int a[301]={' '};
	int b[301]={' '};
	int i,j;
	int flag[301]={0};

	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	b[0]=a[0];
	for(i=1;i<n;i++)
		for(j=0;j<i;j++)
	{
		if(a[i]==a[j])
			break;
		else if(j==i-1)
		{
			b[i]=a[i];
			flag[i]=1;
		}
	}
	printf("%d",b[0]);
	for(i=1;i<n;i++)
		if(flag[i]==1)
			printf(",%d",b[i]);
}