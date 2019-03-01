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
	int n,k,i,j,l,w;
	int a[1000];
	scanf("%d %d",&n,&k);
	if(n<=0) printf("no");
	l=0;
	i=0;
	while(l<=n-1)
	{
		scanf("%d",&a[l]);
		l++;
	}
	while(i<n-1)
	{
		j=n-1;
		while(j>i)
		{
			w=a[i]+a[j];
			j--;
			if(w==k) {printf("yes");break;}
		}
		if(w==k) {break;}
		i++;
	}
	if(i==n-1) printf("no");

	return 0;
}
