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
	struct point
	{
		int x,y,z;
	};
	struct point p[10];
	struct distance
	{
		struct point p1;
		struct point p2;
		float dis;
	};
	struct distance d[45];
	struct distance temp;
	int i,n,j,k;
	float pf;
	scanf("%d",&n);
	k=0;
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&p[i].x,&p[i].y,&p[i].z);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
		d[k].p1=p[i];
		d[k].p2=p[j];
		pf=(float)(p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y)+(p[i].z-p[j].z)*(p[i].z-p[j].z);
		d[k].dis=sqrt(pf);
		k++;
		}
	}
	for(i=0;i<n*(n-1)/2-1;i++)
	{
		for(j=0;j<n*(n-1)/2-i;j++)
		{
			if(d[j].dis<d[j+1].dis)
			{
				temp=d[j];
				d[j]=d[j+1];
				d[j+1]=temp;
			}
		}
	}
	for(i=0;i<n*(n-1)/2;i++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",d[i].p1.x,d[i].p1.y,d[i].p1.z,d[i].p2.x,d[i].p2.y,d[i].p2.z,d[i].dis);
	}
	return 0;
}
