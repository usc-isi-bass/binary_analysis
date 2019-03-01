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

int pand(int y,int z);
void main()
{
	int a[5][5],n,m,i,l,t;
	for(i=0;i<5;i++)
	{
	scanf("%d %d %d %d %d\n",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);
	}
	scanf("%d %d\n",&n,&m);
	l=pand(n,m);
	if(l==0)printf("error");
	else
	{		
		for(i=0;i<5;i++)
		{
			t=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=t;
		}
		for(i=0;i<5;i++)
		{
			printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
		}
	}
}
int pand(int y,int z)
{
     int x;
	 x=(y<=4&&z<=4)? 1:0;
	 return x;
}