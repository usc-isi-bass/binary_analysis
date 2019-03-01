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


int count(int x, int y)
{
	if(x==0||y==1)
		return (1);
	else if(x<y)
		return (count(x,x));
	else 
		return (count((x-y),y)+count(x,y-1));
}



void main()
{
	int m[30],n[30];
	int i,k;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&m[i],&n[i]);
		printf("%d\n",count(m[i],n[i]));
	}
}
	

