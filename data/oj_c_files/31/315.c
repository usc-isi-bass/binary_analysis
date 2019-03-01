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
	char qita[50];
	struct student *last;
};

void main()
{
	int l;
	struct student *end,*head,*p1,*p2;
	l=sizeof(struct student);
	end=(struct student*)malloc(l);
	head=(struct student*)malloc(l);
	scanf("%s",head->num);
	gets(head->qita);
	head->last=end;
	end->last=NULL;
	p1=head;
	p2=head;
	for(;;)
	{
		p1=(struct student*)malloc(l);
		scanf("%s",p1->num);
		if(p1->num[0]=='e')
			break;
		gets(p1->qita);
		p1->last=p2;
		p2=p1;
	}
	while(p2->last!=NULL)
	{
		printf("%s%s\n",p2->num,p2->qita);
		p2=p2->last;
	}
}


