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
	char info[100];
	struct student *next;
	};
int n;
struct student*creat(void)
{struct student *head,*p1,*p2;
 p1=p2=(struct student*)malloc(LEN);
 gets(p1->info);
 p1->next=null;
 while(strcmp("end",p1->info)!=0)
	{head=p1;
	p1=(struct student*)malloc(LEN);	  
	  p1->next=p2;
	  p2=p1;
	  
	  gets(p1->info);
	}
 return(head);
}
void print(struct student*head)
{struct student*p;
 p=head;
 while(p!=null)
	{printf("%s\n",p->info);
     p=p->next;
	}
}
main()
{struct student*head;
 head=creat();
 print(head);
}
