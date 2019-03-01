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
	int a[200],b[200],i,j,n,r,s,t;
	r=0;
	s=0;
	t=0;
	scanf("%d\n",&n);
	for(i=0,j=0;i<n,j<n;i++,j++)
	{
		scanf("%d%d",&a[i],&b[j]);
	}
	for(i=0,j=0;i<n;i++,j++)
	{
		if((a[i]==0&&b[j]==1)||(a[i]==1&&b[j]==2)||(a[i]==2&&b[j]==0))
		{
			r++;
		}
		if(a[i]==b[j])
		{
			s++;
		}
		if((b[j]==0&&a[i]==1)||(b[j]==1&&a[i]==2)||(b[j]==2&&a[i]==0))
		{
			t++;
		}
	}
    if(r>t)
	{
		printf("A");
	}
	if(t>r)
	{
		printf("B");
	}
	if(r==t)
	{
		printf("Tie");
	}
	return 0;
}