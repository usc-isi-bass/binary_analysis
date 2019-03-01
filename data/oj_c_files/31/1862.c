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
	char num[10];
	char name[20];
	char sex;
	int age;
	float mark[6];
	char add[10];
	struct stu *next;
};
int n;
struct stu *creat(void)
{
	struct stu *head;
	struct stu *p1,*p2;
	n=0;
	p1=p2=(struct stu *)malloc(sizeof(struct stu));
	scanf("%s",p1->num);
	if(strcmp(p1->num,"end")==0)
	{
		free(p1);
		head=NULL;
		return head;
	}
	else 
	{
		scanf(A,p1->name,&p1->sex,&p1->age,p1->mark,p1->add);
		head=p1;
		p2=p1;
		p1->next=NULL;
		do
		{
			p1=(struct stu *)malloc(sizeof(struct stu));
			scanf("%s",p1->num);
			if(strcmp(p1->num,"end")==0)
			{
		         free(p1);
		         break;
			}
			else
			{
				scanf(A,p1->name,&p1->sex,&p1->age,p1->mark,p1->add);
				head=p1;
				p1->next=p2;
				p2=p1;
			}
		}while(1);
		return head;
	}
}

int main(void)
{
	struct stu *p;
	struct stu *head;
	p=creat();
	while(p)
	{
		printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->age,p->mark,p->add);
		p=p->next;
	}
}