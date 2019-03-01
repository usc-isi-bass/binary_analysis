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
	char stuID[20];
	char name[20];
	char sex;
	int age;
	char score[10];
	char add[20];
	struct student*next;
};
int main()
{
	struct student *p,*a;
	char str[10]={"end"};
	p=(struct student*)malloc(sizeof(struct student));
	scanf("%s",p->stuID);
	p->next=NULL;
	while(strcmp(p->stuID,str)!=0)
	{
		scanf("%s %c %d %s %s",p->name,&(p->sex),&(p->age),p->score,p->add);
		a=p;
		p=(struct student*)malloc(sizeof(struct student));
		p->next=a;
		scanf("%s",p->stuID);
	}
	while(p->next!=NULL)
	{
		p=p->next;
		printf("%s %s %c %d %s %s\n",p->stuID,p->name,p->sex,p->age,p->score,p->add);
	}
	return 0;
}

