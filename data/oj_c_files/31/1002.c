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
{char c[300];
 struct student *next;
};
int n;
struct student * create()
{struct student *head,*p1,*p2;
 n=0;
 p1=p2=head=(struct student*)malloc(Len);
 gets(head->c);
 head->next=0;
 while (strcmp("end",p1->c)!=0)
 {head=p1;
  p1=(struct student*)malloc(Len);
  p1->next=head;
  gets(p1->c);
 }
 return head;
}
int main()
{   struct student *start;
	start=(struct student*)create();
	do 
	{printf("%s\n",start->c);
	 start=start->next;
	}while (start->next!=0);
	printf("%s\n",start->c);
	return 7;
}













