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



struct stu
	{char id[100];
	char name[100];
	char sex[3];
	char age[10];
	char score[10];
	char add[100];
	struct stu *next;
	};

int main()
{
	int k,m,n,t,ans,ii,i,j,jj,flag;
	struct stu *p0,*p1,*p2,*head;
	char s[30];
	p1 = (struct stu*)malloc(LEN);
	scanf("%s%s%s%s%s%s",p1->id,p1->name,p1->sex,&p1->age,&p1->score,p1->add);
	p1->next = NULL;
	head = p1;
	p2 = p1;
	while (1)
	{
		p1 = (struct stu*)malloc(LEN);
		scanf("%s",p1->id);
		if (strcmp(p1->id,"end")==0)
		{
			head = p2;	
			break;
		}
		scanf("%s%s%s%s%s",p1->name,p1->sex,&p1->age,&p1->score,p1->add);
		p1->next = p2;
		p2 = p1;
	}

	p1 = head;
	while (p1->next!=NULL)
	{
		printf("%s %s %s %s %s %s\n",p1->id,p1->name,p1->sex,p1->age,p1->score,p1->add);
		p1 = p1->next;
	}
	printf("%s %s %s %s %s %s",p1->id,p1->name,p1->sex,p1->age,p1->score,p1->add);
	return 0;
}

