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

// ????STUDENT_NUM????????“????”???? 
//?????????ID??????????????????? 
//??????????????????????? 
int n;
struct student
{
	int num;
	int chn;
	int math;
	int ovr;
	struct student *next;
};
struct student *creat()
{
	int i;
	struct student *head;
	struct student *p1,*p2;
	head=(struct student *)malloc(sizeof(struct student));
	p1=p2=head;
	for(i=0;i<n;i++)
	{
		p2=p1;
		p1=(struct student *)malloc(sizeof(struct student));
		p2->next=p1;
		scanf("%d %d %d",&p2->num,&p2->chn,&p2->math);
		p2->ovr=p2->chn+p2->math;
	}
	p2->next=0;
	return (head);
}
int main()
{
	int i;
	int no1,ovr1=0;
	struct student *head;
	struct student *p1,*p2;
	scanf("%d",&n);
	head=creat();
	p1=p2=head;
	for(i=0;i<3;i++)
	{
		p1=head;
		while(p1->next!=0)
		{
			if(p1->ovr>ovr1)
			{
				ovr1=p1->ovr;
				no1=p1->num;
				p2=p1;
			}
			p1=p1->next;
		}
		printf("%d %d\n",no1,ovr1);
		p2->ovr=0;
		ovr1=0;

	}
	return 0;
}
