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
	char num[20];
	char name[20];
	char sex;
	int age;
	float grade;
	char addr[100];
	struct student *next;
};
struct student *creat()
{
	struct student *pt,*pn;
	pn=(struct student *)malloc(sizeof(struct student));
	pt=0;
	scanf("%s",pn->num);
	pn->next=0;
	while(pn->num[0]!='e')
	{
		scanf("%s %c %d %f %s",pn->name,&pn->sex,&pn->age,&pn->grade,pn->addr);
		pt=pn;
		pn=(struct student *)malloc(sizeof(struct student));
		pn->next=pt;
		scanf("%s",pn->num);
	}
	return(pt);
}
int main()
{
	struct student *head,*p;
	head=creat();
	p=head;
	while(p!=0)
	{
		printf("%s %s %c %d %g %s\n",p->num,p->name,p->sex,p->age,p->grade,p->addr);
		p=p->next;
	}
	return 0;
}