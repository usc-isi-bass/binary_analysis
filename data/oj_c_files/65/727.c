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
	int n,i,a[200],b[200],x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i] ,&b[i]);
	}
x=0;
y=0;
	for(i=0;i<n;i++)
	{
		if(a[i]-b[i]==-1||a[i]-b[i]==2)
			x++;
		if(a[i]-b[i]==1||a[i]-b[i]==-2)
			y++;
	}
	if(x>y)
		printf("A");
	if(x<y)
		printf("B");
	if(x==y)
		printf("Tie");
	return 0;
}
