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


struct stu
{
	char num[20];
	char name[20];
	char sex;
	int age;
	double x;
	char add[20];
	struct stu *next;
};

struct stu *creat()
{
	struct stu *head,*p1,*p2;
	p1=(struct stu *)malloc(LEN);
	scanf("%s %s %c %d %lf %s ",&p1->num,&p1->name,&p1->sex,&p1->age,&p1->x,&p1->add);
	p2=p1;head=p1;
	p1->next=NULL;
	while(1)
	{
	p1=(struct stu *)malloc(LEN);
	scanf("%s ",&p1->num);
	if(p1->num[0]!='e')
	{
	    scanf("%s %c %d %lf %s ",&p1->name,&p1->sex,&p1->age,&p1->x,&p1->add);
	    p1->next=p2;
	    p2=p1;
	}
	else
		break;
	}
	return p2;
}
void print(struct stu *head)
{
	struct stu *p;
	p=head;
	while(p!=NULL)
	{
		printf("%s %s %c %d %g %s\n",p->num,p->name,p->sex,p->age,p->x,p->add);
		p=p->next;
	}
}
void destroy(struct stu *head)
{
	struct stu *p;
	while(head)
	{
		p=head;
		head=head->next;
		free(p);
	}
}

int main()
{
	struct stu *head;
	head=creat();
	print(head);
	destroy(head);
	return 0;
}