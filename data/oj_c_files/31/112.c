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

struct aa
	{
		char data[100];
		struct aa* next;
	};
void print(struct aa* p)
{
	if (p->next!=NULL) print(p->next);
	cout <<p->data<<endl;
}
int main()
{
	
	struct aa *head,*p,*q;
	int si=sizeof(struct aa);
	head=(struct aa*)malloc(si);
	p=head;q=head;
	char s[100];
	while (cin.getline(s,100))
		if (strcmp(s,"end"))
		{
			q=(struct aa*)malloc(si);
			p->next=q;
			strcpy(q->data,s);
			q->next=NULL;
			p=q;
		}
		else break;
	print(head->next);
	return 0;
}
				





