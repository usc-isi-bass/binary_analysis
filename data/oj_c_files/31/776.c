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

struct student//?? ?? ?? ?? ?? ??
{
	char num[12];
	char name[20];
	char sex;
	int age;
	float grade;
	char add[12];
	struct student *next;
};
int n=1;
struct student *build(void)	//????
{
	struct student *pn, *pt;
	pn=(struct student*)malloc(sizeof(struct student));
	scanf("%s",pn->num);
	pn->next=NULL;
	while(pn->num[0]!='e')
	{
		scanf(" %s %c %d %f %s",&pn->name,&pn->sex,&pn->age,&pn->grade,&pn->add);
		pt=pn;
		pn=(struct student*)malloc(sizeof(struct student));
		pn->next=pt;
		scanf("%s",pn->num);
	}
	return (pt);
}
void main()
{
	struct student *p;
	p=build();
	while(p!=NULL)
	{
		printf("%s %s %c %d %g %s\n",p->num,p->name,p->sex,p->age,p->grade,p->add);
		p=p->next;
	}
}
