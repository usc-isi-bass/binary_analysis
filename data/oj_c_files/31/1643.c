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
	char score[10];
	char address[50];
	struct student *next;
};
void main()
{
	struct student *head,*p,*s;
	head=(struct student *)malloc(sizeof(struct student));
	head->next=NULL;
    p=head->next;	
	for(;;)
	{
		s=(struct student *)malloc(sizeof(struct student));
		s->next=NULL;
		scanf("%s",s->num);
		if(strcmp(s->num,"end")==0)
			break;
		scanf("%s %c %d %s %s",s->name,&s->sex,&s->age,s->score,s->address);
		head->next=s;
		s->next=p;
		p=s;
	}
	while(p!=NULL)
	{
		printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->address);
		p=p->next;
	}
}