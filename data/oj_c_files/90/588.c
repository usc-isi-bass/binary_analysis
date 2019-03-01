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

int sweet(int x,int y)
{
	if(x<y)
		y=x;
	if((x==1)||(y==0)||(y==1))
		return 1;
	else
		return sweet(x-y,y)+sweet(x,y-1);
}
int main()
{
	int x[100],y[100],n,i,honey[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&x[i],&y[i]);
		honey[i]=sweet(x[i],y[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",honey[i]);
	}
	return 0;
}

