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


struct monkey
{
	int x;
	struct monkey *l,*r;
};

int guowang(int n,int m)
{
	int wang,i,j;
	struct monkey *p,*s,*t;
	p=(struct monkey *)malloc(n*sizeof(monkey));
	for(i=1;i<n-1;i++)
	{
		(p+i)->x=i+1;
		(p+i)->l=p+i-1;
		(p+i)->r=p+i+1;
	}
	p->x=1;
	(p+n-1)->x=n;
	p->l=p+n-1;
	p->r=p+1;
	(p+n-1)->l=p+n-2;
	(p+n-1)->r=p;
	for(i=1;i<n;i++)
	{
		s=p;
		for(j=1;j<m;j++)
			s=s->r;
		
		s->l->r=s->r;
		
		s->r->l=s->l;
		p=s->r;
	}
	wang=p->x;
	return wang;
}


int main()
{
	int n[100],m[100],l,a[100],i;
	for(l=0;;l++)
	{
		scanf("%d %d",&n[l],&m[l]);
		if(n[l]==0&&m[l]==0)
			break;
		else
			a[l]=guowang(n[l],m[l]);
	}
	
	for(i=0;i<l;i++)
		printf("%d\n",a[i]);
}