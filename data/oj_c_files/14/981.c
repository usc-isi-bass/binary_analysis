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

struct student{
	int num;
	int yuwen;
	int shuxue;
	int score;
	struct student *next;
};
int n,i=0,a;
struct student *m1,*m2,*m3,*q;
struct student *creat(void)
{
	struct student *head;
	struct student *p1,*p2;
	p1=p2=(struct student*)malloc(LEN);
	scanf("%d %d %d",&p1->num,&p1->yuwen,&p1->shuxue);
	p1->score=p1->yuwen+p1->shuxue;
	head=NULL;
	while(i<n-1)
	{		
		if(i==0)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(LEN);		
		scanf("%d %d %d",&p1->num,&p1->yuwen,&p1->shuxue);
		p1->score=p1->yuwen+p1->shuxue;
		if(i>=3)
		{
			if(p2->score>m1->score)
			{
				m3=m2;
				m2=m1;
				m1=p2;
			}
			else if(p2->score<=m1->score&&p2->score>m2->score)
			{
				m3=m2;
				m2=p2;
			}
			else if(p2->score<=m2->score&&p2->score>m3->score)
				m3=p2;
			i++;
			continue;
		}
		if(i==0)m1=p2;
		else if(i==1)m2=p2;
		else if(i==2)
		{
			m3=p2;
			if(m1->score>m2->score)
			{
				if(m2->score<=m3->score)
				{
					if(m1->score>m3->score)
					{
						q=m3;
						m3=m2;
						m2=q;
					}
					else if(m1->score<=m3->score)
					{
						q=m1;m1=m2;m2=m3;m3=q;
					}
				}
			}
			else if(m1->score<=m2->score)
			{
				if(m2->score>m3->score)
				{
					if(m1->score>m3->score)
					{
						q=m1;
						m1=m2;
						m2=q;
					}
					else if(m1->score<=m3->score)
					{
						q=m3;m3=m1;m1=m2;m2=q;
					}
				}
				else if(m2->score<=m3->score)
				{
					q=m1;
					m1=m3;
					m3=q;
				}
			}
		}
		i++;
	}
	return(head);
}
int main()
{
	struct student *head;
	scanf("%d",&n);
	head=creat();
	printf("%d %d\n",m1->num,m1->score);
	printf("%d %d\n",m2->num,m2->score);
	printf("%d %d\n",m3->num,m3->score);
	return 0;					
}

