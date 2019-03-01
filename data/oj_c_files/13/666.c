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
	int i,j,t=1,sum,n;
	scanf("%d",&n);
	int x[20000],y[20000];
	for(i=0;i<n;i++) scanf("%d",&y[i]);
	x[0]=y[0];
	int k=0;
	for(i=1;i<n;i++)
	{
		sum=1;
		for(j=0;j<=k;j++) sum=sum*(y[i]-x[j]);
		if(sum!=0) {x[k+1]=y[i];k++;}
	}
         printf("%d",x[0]);
	for(i=1;i<=k;i++) printf(" %d",x[i]);
	printf("\n");
	return 0;
}

