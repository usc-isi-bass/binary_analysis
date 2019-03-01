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
       char num[20];
	   char name[30];
	   char sex;
	   int age;
	   float score;
	   char adress[30];
	   struct student *next;
	   struct student *last;
};

int n=1;

struct student *ANewNode(void)
{
	struct student *head=NULL,*newnode,*thisnode;
    
	do
	{
		newnode=(struct student *)malloc(sizeof(struct student));
		scanf("%s",newnode->num);
	    if(strcmp(newnode->num,"end")==0)
		{
			thisnode->next=NULL;
			head=thisnode;
			break;
		}
		else;
        scanf("%s %c %d %f %s",newnode->name,&newnode->sex,&newnode->age,&newnode->score,newnode->adress);
		if(n==1)
		{
			head=newnode;
			thisnode=head;
			thisnode->last=NULL;
		}
		else
		{
			thisnode->next=newnode;
			newnode->last=thisnode;
		}
			thisnode=newnode;
			n=n+1;
		
	}while(strcmp(newnode->num,"enff")!=0);
	return(head);
}
		  
int main()
{
    struct student *head,*p;

	head=ANewNode();

	p=head;
	do
	{
		printf("%s %s %c %d %g %s\n",p->num,p->name,p->sex,p->age,p->score,p->adress);
		p=p->last;
	}while(p!=NULL);
	scanf("%d",&n);
 return 0;
}

