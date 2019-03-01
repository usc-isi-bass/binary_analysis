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
	char num[10];
	char name[20];
	char sex;
	int age;
	char score[20];
	char address[50];
    struct student *next;
};
void main()
{
	struct student *head,*p,*q,*t;
	t=(struct student*)malloc(sizeof(struct student));
	t->next=NULL;
	head=(struct student*)malloc(sizeof(struct student));
	head->next=NULL;
	int i;
	for(i=0;;i++)
	{
		p=head->next;
		q=(struct student*)malloc(sizeof(struct student));
		q->next=NULL;
		scanf("%s",q->num);
        if(q->num[0]=='e')
			break;
		scanf("%s %c %d %s %s",q->name,&q->sex,&q->age,q->score,q->address);
		t->next=p;
		head->next=q;
		q->next=p;
	}
	head->next=p;
	while(p!=NULL)
	{
		printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->address);
		p=p->next;
	}
}
