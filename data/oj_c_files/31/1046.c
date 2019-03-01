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


struct node{
	char str[MAX];
	struct node *next;
}*head;

void main()
{
	struct node *p1,*p2,*p;
	p1=p2=(struct node *)malloc(LEN);
	gets(p1->str);
	p1->next=0;
	while(strcmp( p1->str , "end" )!=0){
		p1=(struct node *)malloc(LEN);
		gets(p1->str);
		p1->next=p2;
		head=p2;
		p2=p1;
	}

	p=head;
	while(p!=0){
		puts(p->str);
		p=p->next;
	}
}
