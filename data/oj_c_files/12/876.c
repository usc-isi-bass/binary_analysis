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
	int a[16],x,i,j,t=0;
	for(;;){
		x=1;t=0;
		scanf("%d",&a[0]);
	if(a[0]==-1) break;
	else
	{
	for(i=1; ;i++)
	{scanf("%d",&a[i]);
	if(a[i]==0) break;x++;
	}
	for(i=0;i<x-1;i++)
	{for(j=i+1;j<=x-1;j++)
	{if(a[i]==2*a[j]||a[j]==2*a[i])
	t++;
	}
	}
	printf("%d\n",t);}}
}