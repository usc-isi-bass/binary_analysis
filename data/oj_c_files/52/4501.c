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
	int n,m;
	int a[100];
	int i,j,k;
	int temp;

	scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
	    scanf("%d",a+i);
	for(j=n-m;j<n;j++)
		for(k=0;k<n-m;k++)
		{
			temp=*(a+j-k);
			*(a+j-k)=*(a+j-1-k);
			*(a+j-1-k)=temp;
		}
	for(i=0;i<n;i++)
		printf("%d%c",*(a+i),(i==n-1)?'\n':' ');
	return 0;
}