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
	int n,i,j,k=0,e=0,max,y;scanf("%d",&n);
	struct st
	{
		int a;int z;int c;
		int d;
	}b[100000];
for(i=0;i<n;i++)
{
scanf("%d%d%d",&b[i].a,&b[i].z,&b[i].c);b[i].d=b[i].z+b[i].c;
}
	for(i=0;i<n;i++)
	{
		max=0;
for(j=0;j<n;j++)
{if(b[j].d>max){max=b[j].d;y=j;}}
	printf("%d %d\n",b[y].a,b[y].d);e++;b[y].d=0;if(e==3)break;
	}

}