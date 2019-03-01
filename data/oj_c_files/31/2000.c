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


struct node
{
	char str[100];
	struct node *next;
};

void main()
{
	struct node *head=NULL, *element;
	char str[100];
	gets(str);
	while(strcmp(str,"end"))
	{
		element=(struct node *)malloc(sizeof(struct node));
		strcpy(element->str,str);
		element->next=head;
		head=element;
		gets(str);
	}
	while(head!=NULL)
	{
		puts(head->str);
		head=head->next;
	}
}