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
	int n,i,j,x,y,max=0,sum[50]={0};
	scanf("%d",&n);
	for(i=j=0;i<n;i++){
		scanf("%d%d",&x,&y);
		if(x>=90&&x<=140&&y>=60&&y<=90)
			sum[j]++;
		else
			if(sum[j])
				j++;
	}
	for(i=0;i<50;i++)
		if(max<=sum[i])
			max=sum[i];
	printf("%d\n",max);
	return 0;
}
