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

struct data
{
	char c;
	struct data *pt;
};//????????

struct data *create(void)//??????
{
	struct data *head,*p1,*p2;

	p1=p2=(struct data *)malloc(sizeof(struct data));//????
	head=p1;
	p1->c=getchar();

	for(;p2->c!='\n';)//?????
	{p1=(struct data *)malloc(sizeof(struct data));
	p1->c=getchar();
	p2->pt=p1;//???p2???????
	p2=p1;
	p2->pt=NULL;}

	return head;

}
void main()
{

	struct data *headi,*ptr;
	int flag=0;
	headi=create();
	
	for(ptr=headi;ptr!=NULL;ptr=ptr->pt)//????
		if('9'>=ptr->c&&'0'<=ptr->c) putchar(ptr->c),flag++;
		else 
		{
			if(ptr->pt!=NULL)
				if('9'>=ptr->pt->c&&'0'<=ptr->pt->c&&flag!=0)
					putchar('\n');
		}
}