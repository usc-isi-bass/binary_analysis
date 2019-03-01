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

struct student
{
	int num;
	struct student *next;
};

void main()
{
	int i,j,t,a,n[301],m[301],r[300];
	struct student *head;
	struct student *p1,*p2;
	for(t=0;;t++)
	{
		scanf("%d %d",&n[t],&m[t]);
		if(n[t]==0 && m[t]==0)
			break;		
	}
	for(i=0;i<t;i++)
	{
		a=1;
		p1=p2=(struct student *)malloc(LEN);
		p1->num=a;
		head=p1;
		while(a<n[i])
		{
			if(a==1) head=p1;
			else p2->next=p1;
			p2=p1;
			p1=(struct student *)malloc(LEN);
			p1->num=a+1;
			a++;
		}
		p2->next=p1;
		p1->next=head;
		for(;n[i]>1;n[i]--)
		{
			p1=p2=head;
			for(j=1;j<m[i];j++)
			{
				p2=p1;
				p1=p1->next;
			}
			p2->next=p1->next;
			head=p1->next;
		}
		r[i]=head->num;
	}
	for(i=0;i<t;i++)
	{
		printf("%d\n",r[i]);
	}
}