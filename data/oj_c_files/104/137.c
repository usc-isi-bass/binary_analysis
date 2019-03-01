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
	int found(int x,int y);
	
	int x,y,z;

	scanf("%d %d",&x,&y);

	z=found(x,y);

	printf("%d\n",z);
}

int found(int x,int y)
{
	int i,j,a[10],b[10];
	for(i=0;i<10;i++)
	{
		a[i]=x;
		x=x/2;
	}

	for(i=0;i<10;i++)
	{
		b[i]=y;
		y=y/2;
	}
	
	for(i=0;i<10;i++)
		for(j=0;j<10;j++)
			if(a[i]==b[j])
			{
				return a[i];
				break;
			}
}