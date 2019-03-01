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

int fpg(int M,int N)
{
	int i,K=1;
	if(N==1)
	{
		return K=1;
	}
    if(M<N)
	{
		K=fpg(M,N-1);
	}
	else
	{
	    K=fpg(M,N-1)+fpg(M-N,N);
	}
	return K;
}
int main()
{
	int i,n,a[100],b[100],c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		c[i]=fpg(a[i],b[i]);
		printf("%d\n",c[i]);
	}
	return 0;
}
