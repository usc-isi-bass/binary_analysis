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
	int m,n,i=1,j,k,a[301];
	scanf("%d",&a[0]);
	while(scanf(",%d",&a[i])) i++;
	for(j=0;j<i;j++)
		for(k=0;k<i-j-1;k++)
		{
			if(a[k]>a[k+1]) {n=a[k];a[k]=a[k+1];a[k+1]=n;}
		}
	for(j=i-1;j>=0;j--)
		if(a[j]>a[j-1]) break;
	if(j==-1) printf("No\n");
	else printf("%d\n",a[j-1]);
	return 0;
}
