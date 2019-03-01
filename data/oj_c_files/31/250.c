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
	char number[20];
	char name[20];
	char sex;
	int age;
	float grade;
	char address[20];
	struct student *next;
};
int n;
struct student *creat(void)
{
	struct student *head,*p1,*p2;
	head=p1=p2=(struct student *)malloc(LEN);
	scanf("%s %s %c %d %f %s",p1->number,p1->name,&p1->sex,&p1->age,&p1->grade,p1->address);
    p2->next=NULL;
	for(n=0;;n++)
	{
		p1=(struct student *)malloc(LEN);
		p1->next=p2;
		scanf("%s",p1->number);
		if(strcmp(p1->number,"end")==0)break;
		scanf("%s %c %d %f %s",p1->name,&p1->sex,&p1->age,&p1->grade,p1->address);
		p2=p1;
		head=p1;
	}return head;
}
void main()
{
	struct student *head,*p;
	head=creat();
	p=head;
	while(p!=NULL)
	{
		printf("%s %s %c %d %g %s\n",p->number,p->name,p->sex,p->age,p->grade,p->address);
		p=p->next;
	}
}

