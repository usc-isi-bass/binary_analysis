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

void main()
{
	int x,y,a[11]={2},b[11]={3},i=0,j=0,t,n=0,k;
	scanf("%d%d",&x,&y);
	while(x>0)
	{
		a[i+1]=x%2;
		x=(x-x%2)/2;
		i++;
	}
	while(y>0)
	{
		b[j+1]=y%2;
		y=(y-y%2)/2;
		j++;
	}
	t=i;
	while(a[i]==b[j])
	{
		i--;
		j--;
	}
	for(k=t;k>=i+1;k--)
		n=n*2+a[k];
	printf("%d",n);
}