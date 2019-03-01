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

struct stru
{
	char id[20];
	int age;
	struct stru *next;
}*head,*p,*q;

void creat(int N)
{
	int i;
	p=q=(struct stru *)malloc(LEN);
	head=p;
	scanf("%s %d",p->id,&p->age);
	for(i=1;i<N;i++)
	{
		p=(struct stru *)malloc(LEN);
		scanf("%s %d",p->id,&p->age);
		q->next=p;
		q=p;
	}
	q->next=NULL;
}

void arrange(struct stru *head,int N)
{
	int i,temp;char media[20];
	for(i=0;i<N;i++)
		for(p=head,q=head->next;q!=NULL;p=p->next,q=q->next)
		{
			if(q->age>=60 && q->age>p->age)
			{
				strcpy(media,p->id);
				strcpy(p->id,q->id);
				strcpy(q->id,media);
				temp=p->age;
				p->age=q->age;
				q->age=temp;
			}
		}
}


void print(struct stru *head)
{
	for(p=head;p!=NULL;p=p->next)
		printf("%s\n",p->id);
}

void main()
{
	int N;
	scanf("%d",&N);
	creat(N);
	//print(head);
	arrange(head,N);
	print(head);
}



