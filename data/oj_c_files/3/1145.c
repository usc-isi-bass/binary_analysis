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
	int n,k,j,biaoji=0,m;
	int i,a[max];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
		{
    m=k-a[i];
	for(j=i;j<n;j++)
	{
		if(m==a[j])
		{
			biaoji=1;
		break;
		}
	}
	}
	if(biaoji)
			printf("yes");
		else
			printf("no");
	return 0;
}
