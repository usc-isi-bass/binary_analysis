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

struct Node;
typedef struct Node *pNode; 
struct Node
{
    int x;
	char id[20];
	pNode next;
};


pNode create()/*??head*/
{
	pNode p;
	p=(pNode)malloc(sizeof(struct Node));
	p->next=NULL;
	return p;
}

void sort(pNode head,int n)/*head???????n???*/
{
	pNode p=NULL,q=NULL,s=NULL;
    int i;
	for (i=1;i<=n;i++)
	{
	s=(pNode)malloc(sizeof(struct Node));
	s->next=NULL;
	scanf("%s %d",&s->id,&s->x);
    if (s->x<60)
	{
		p=head;
		while (p->next)
			p=p->next;
		p->next=s;
	}
    else
	{
		q=head;
	    p=head->next;
	    while (p)
		{
			if (p->x<s->x)
				break;
		    q=p;
		    p=p->next;
		}
	    q->next=s;
	    s->next=p;
	}
	}
}

void outputdata(pNode p)/*??head*/
{
    p=p->next;
	while(p->next)
	{
      printf("%s\n",p->id);
	  p=p->next;
    }
	printf("%s\n",p->id);
}


int main()
{
	pNode head;
	int n;
    head=create();
	scanf("%d",&n);
	sort(head,n);
	outputdata(head);

	return 0;
}
