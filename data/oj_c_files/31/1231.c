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
{char num[20];
char name[20];
char sex;
int age;
float score;
char address[20];
struct student *next;
};

void main()
{
	struct student *p1,*p2,*head,*p;
	p1=p2=(struct student *) malloc(LEN);
	scanf("%s",p1->num);
	p1->next=NULL;
	while(p1->num[0]!='e')
	{
		scanf("%s %c%d%f%s",p1->name,&p1->sex,&p1->age,&p1->score,p1->address);
		p1=(struct student *) malloc(LEN);
		p1->next=p2;
		p2=p1;
		scanf("%s",p1->num);
	}
	p=head=p2->next;
	while(p!=NULL)
	{
		printf("%s %s %c %d %g %s\n",p->num,p->name,p->sex,p->age,p->score,p->address);
		p=p->next;
	}
}