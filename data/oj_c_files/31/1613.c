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
	char id[20];
	struct student *pre;
};
void main()
{
	struct student *p1,*p2,*end;
	p1=(struct student *)malloc(sizeof(struct student));
	end=p1;
	p2=p1;
	p1->pre=NULL;
	scanf("%s %s %c %d %s %s",p1->num,p1->name,&p1->sex,&p1->age,p1->score,p1->id);
	for(;1;)
	{
		p1=(struct student *)malloc(sizeof(struct student));
		scanf("%s",p1->num);
		if(strcmp(p1->num,"end")==0){end=p2;break;}
		else scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->id);
		p1->pre=p2;
		p2=p1;
	}
	p1=end;
	for(;p1!=NULL;)
	{
	   printf("%s %s %c %d %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->id);
	   p1=p1->pre;
	}
}