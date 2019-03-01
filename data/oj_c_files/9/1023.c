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

struct person
{
	char id[10];
	int age;
	struct person *next;
};
void main()
{
	int n,i,j;
	struct person *head,*ppre,*pnew,*p;

	scanf("%d",&n);
	pnew=(struct person *)malloc(len);
	scanf("%s %d\n",pnew->id,&pnew->age);
	pnew->next=NULL;
	head=pnew;
	for(i=2;i<=n;i++)
	{
		p=head;
		ppre=head;
		pnew=(struct person *)malloc(len);
	    scanf("%s %d",pnew->id,&pnew->age);
    	pnew->next=NULL;
		if((pnew->age>=60)&&(pnew->age>head->age))
		{
			pnew->next=head;
			head=pnew;
		}
		else
		{
			if (pnew->age>=60)
			{
				p=p->next;
				for(j=2;j<i;j++)
				{
					if(pnew->age>p->age)
					{
						pnew->next=p;
						ppre->next=pnew;
						break;
					}
					p=p->next;
					ppre=ppre->next;
				}
	    	    if(pnew->next==NULL)
		    	    ppre->next=pnew;
			}
			else
			{
				while (p->next!=NULL)
					p=p->next;
				p->next=pnew;
			}
		}
	}
	p=head;
	for(i=0;i<n;i++)
	{
		printf("%s\n",p->id);
		p=p->next;
	}
}
