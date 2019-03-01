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
	int id;
	int score1;
	int score2;
	struct student *next;
};
struct student *head;
struct student *creat(int x)
{
	struct student *p1,*p2;
	p1=p2=(struct student *)malloc(LEN);
    scanf("%d %d %d",&p1->id,&p1->score1,&p1->score2);
	head=0;
	while(p1->id<x)
	{
		if(p1->id==1)
			head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(LEN);
		scanf("%d %d %d",&p1->id,&p1->score1,&p1->score2);
		if(p1->id==x){
			p2->next=p1;
			p2=p1;
		}
	}
	p2->next=0;
	return(head);
}
void main()
{
	int n;
	struct student *p,*q,*j,*k;
	scanf("%d",&n);
	creat(n);
	p=q=head;
	do{
		if((p->score1+p->score2)>(q->score1+q->score2))
			q=p;
		p=p->next;
	}while(p!=0);
	p=j=head;
	do{
		if((p->score1+p->score2)>(j->score1+j->score2)&&p!=q)
			j=p;
		p=p->next;
	}while(p!=0);
	p=k=head;
	do{
		if((p->score1+p->score2)>(k->score1+k->score2)&&p!=q&&p!=j)
			k=p;
		p=p->next;
	}while(p!=0);
	printf("%d %d\n",q->id,(q->score1+q->score2));
	printf("%d %d\n",j->id,(j->score1+j->score2));
	printf("%d %d",k->id,(k->score1+k->score2));
}