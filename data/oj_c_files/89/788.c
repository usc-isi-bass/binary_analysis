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
	int n,a[1000000][2],i=0,j,p,renshi,sum=0;
	scanf("%d",&n);
	while(1)
	{
		
		scanf("%d%d",&a[i][0],&a[i][1]);
		if(a[i][0]==0&&a[i][1]==0)
		break;
		i++;
	}
	for(p=0;p<n;p++)
	{
		renshi=0;
		for(j=0;j<i;j++)
		{
			if(a[j][0]==p)break;
			if(a[j][1]==p)
			renshi++;	
		}
		if(renshi==(n-1))
		{
			printf("%d\n",p);
			sum++;	
		}
	}
	if(sum==0)
	printf("NOT FOUND");
	return 0;
	
}