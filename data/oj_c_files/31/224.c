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
	char ID[20];
	char name[20];
	char sex;
	int age;
	char score[20];
	char address[20];
	struct student *next;
};
struct student *create()
{
	struct student *head,*p1,*p2;
	p1=(struct student*)malloc(LEN);
	scanf("%s",p1->ID);
	if(strcmp(p1->ID,"end")==0){free(p1);head=NULL;}
	else
	{
		head=p1;
		scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->address);
		p1->next=NULL;
		p2=p1;
	do
	{
		p1=(struct student*)malloc(LEN);
		p1->next=NULL;
		scanf("%s",p1->ID);
		if(strcmp(p1->ID,"end")==0){p2->next=NULL;free(p1);break;}
		else
		{
			scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->address);
			p2->next=p1;
			p1->next=NULL;
			p2=p1;
		}
	}while(1);
	}
	return(head);	
}
void print(struct student *list)
{
	if(list==NULL)return;
	else if(list->next==NULL)
		printf("%s %s %c %d %s %s\n",list->ID,list->name,list->sex,list->age,list->score,list->address);
	else
	{
		print(list->next);
		printf("%s %s %c %d %s %s\n",list->ID,list->name,list->sex,list->age,list->score,list->address);
	}
}
int main()
{
	
	struct student *head;
	head=create();
	print(head);
}






