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
	char sex[5];
	int age;
	char score[20];
	char addr[20];
	struct student *next;
};
struct student *head;
struct student *input()
{
	struct student *p1,*p2;
		p1=p2=(struct student *)malloc(sizeof(struct student));
		scanf("%s",p1->num);
		p2->next=NULL;
		while(strcmp(p1->num,"end")!=0)
		{
			scanf("%s",p1->name);
			scanf("%s",p1->sex);
			scanf("%d",&p1->age);
			scanf("%s",p1->score);
			scanf("%s",p1->addr);
			p1=(struct student *)malloc(sizeof(struct student));
			scanf("%s",p1->num);
			p1->next=p2;
			p2=p1;
		}
			head=p1;
			return(head);
}
void print(struct student *head)
{
	struct student *p;
	p=head->next;
	if(head!=NULL)
		do
		{
			printf("%s %s %s %d %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->addr);
			p=p->next;
		}
		while(p!=NULL);
}
main()
{
	input();
	print(head);
	return 0;
}