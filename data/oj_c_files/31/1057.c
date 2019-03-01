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

struct node
{
	struct node *back;
	char num[20];
	char name[20];
	char gender;
	int age;
	char score[10];
	char address[20];
	struct node *next;
};
void main()
{
	char end[]="end";
	char t[20];
	struct node *p,*head;
	p=(struct node *)malloc(sizeof(struct node));
	head=p;
	head->back=NULL;
	scanf("%s %s %c %d %s %s",p->num,p->name,&p->gender,&p->age,p->score,p->address);
	scanf("%s",t);
	while(strcmp(t,end)!=0)
	{
		p->next=(struct node *)malloc(sizeof(struct node));
		p->next->back=p;
		p=p->next;
		strcpy(p->num,t);
		scanf("%s %c %d %s %s",p->name,&p->gender,&p->age,p->score,p->address);
		scanf("%s",t);
	}
	do
	{
		printf("%s %s %c %d %s %s\n",p->num,p->name,p->gender,p->age,p->score,p->address);
		p=p->back;
	}while(p!=NULL);
}