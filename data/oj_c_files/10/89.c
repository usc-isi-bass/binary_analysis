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

int i,j;
void main()
{
	int b[26]={0};
	int k;
	int f(int x,int y,int a[26]);
	scanf("%d",&k);
	for(i=0;i<=k-1;i++)
		scanf("%d",&b[i]);
	printf("%d\n",f(k,k,b)-1);
}
int f(int x,int y,int a[26])
{
	if(y==0)
		return(1);
	int s=0;
	if(y>=1)
	{
		for(i=0;i<y;i++)
		{
			if(a[i]>=a[y]&&f(x,i,a)>=s)
				s=f(x,i,a);
		}
	}
	if(i==y)
		return(s+1);
}