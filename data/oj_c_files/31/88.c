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
		char name[30];
		char sex;
		int age;
		char score[10];
		char address[20];
		struct student *next;
	};
struct student *creat()
{
	struct student *head,*p;
	head=(struct student*)malloc(Len);
	scanf("%s",head->num);
		if(strcmp(head->num,"end")==0) head=NULL;
			else scanf("%s %c %d %s %s",head->name,&head->sex,&head->age,head->score,head->address);
	head->next=NULL;
	while(1)
	{
		p=head;
		head=(struct student*)malloc(Len);
		scanf("%s",head->num);
			if(strcmp(head->num,"end")==0) {head=p;break;}
			else scanf("%s %c %d %s %s",head->name,&head->sex,&head->age,head->score,head->address);
		head->next=p;
	}
	return head;
}
void print(struct student *head)
{struct student *q;
q=head;
while(q){printf("%s %s %c %d %s %s\n",q->num,q->name,q->sex,q->age,q->score,q->address);
q=q->next;}
}
void main()
{
	print(creat());
}