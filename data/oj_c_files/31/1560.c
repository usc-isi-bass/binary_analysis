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



int n;

struct student{char stu[50];struct student *next;};
struct student *creat(void)
{
	struct student *head;
	struct student *p1,*p2;
	n=0;
	p1=p2=(struct student*)malloc(LEN);
	gets(p1->stu);
	head=NULL;
	while(strcmp(p1->stu,"end")!=0)
	{
		n=n+1;
		if(n==1)head=p1;
		else p2-> next=p1;
		p2=p1;
		p1=(struct student*)malloc(LEN);
		gets(p1->stu);
	}
	p2-> next=NULL;
	return(head);
}

struct student *reverse(struct student *head)
{
	struct student *p1,*p2,*p3;
	p2=head;p3=head->next;
	do
	{
		p1=p2;p2=p3;p3=p2->next;p2->next=p1;
	}while(p3!=NULL);
	head->next=NULL;
	return(p2);
}

void print(struct student *head)
{
	struct student *p;
	p=head;
	if(head!=NULL)
	while(p)
	{
		if(p->stu!="end")
			printf("%s\n",p->stu);
		p=p->next;
	}
}

int main()
{
	struct student *head;
	head=creat();
	head=reverse(head);
	print(head);
        return 0;
}