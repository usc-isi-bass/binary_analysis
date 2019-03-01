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

struct Student
{
	char num[10];
	char name[25];
	char sex;
	int age;
	float score;
	char add[15];
	struct Student *next;
};
int main()
{
	struct Student *creat(void);
	struct Student *head,*p;
	head=creat();
	p=head;
	while(p->next!=NULL)
	{
		printf("%s %s %c %d %g %s\n",p->num,p->name,p->sex,p->age,p->score,p->add);
		p=p->next;
	}
	printf("%s %s %c %d %g %s\n",p->num,p->name,p->sex,p->age,p->score,p->add);
}
struct Student *creat(void)
{
	struct Student *head,*news;
	int i;
	head=NULL;
	for(i=0;;i++)
	{
		news=(struct Student *)malloc(sizeof(struct Student));
		scanf("%s",news->num);
		if(news->num[0]=='e') break;
	    scanf(" %s %c %d %f %s",news->name,&news->sex,&news->age,&news->score,news->add);
		news->next=head;
	    head=news;
	}
	return(head);
}