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




void main()
{
	struct student
{
	char stu[100];
	struct student *next;
	struct student *prev;
}*head,*p1,*p2,*p;
	
	int n;
	p1=p2=(struct student *)malloc(LEN);
	gets(p1->stu);
	p1->prev=NULL;
	while(strcmp(p1->stu,"end")!=0)
	{
		p1=(struct student*)malloc(LEN);
		p1->prev=p2;
		gets(p1->stu);
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	
	p=p2;

		do
		{
			p=p->prev;
			printf("%s\n",p->stu);
			
		}while(p->prev!=NULL);
	}
	