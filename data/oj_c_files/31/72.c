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
	char str[100];
	struct student *next;
};

struct student *creat(void)
{struct student *head;
 struct student *p1,*p2,*p3;
 p1=p2=p3=(struct student *)malloc(LEN);
 gets(p1->str);
 while(strcmp(p1->str,"end")!=0)
 {
   p1=(struct student *)malloc(LEN);
   gets(p1->str);
   head=p1;
   p1->next=p2;
   p2=p1;
 }
 p3->next=0;
 return(head);
}

void print(struct student *head)
{
	struct student *p;
	p=head->next;
	do
	{
		puts(p->str);
		p=p->next;
	}while (p->next!=0);
		puts(p->str);
} 

main()
{
	struct student *head;
	head=creat();
	print(head);
}