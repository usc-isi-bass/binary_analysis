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

struct stu
{
	char a[100];
	struct stu * next;
};
struct stu * create()
{
	struct stu *head,*p1,*p2;
	p2=p1=(struct stu *) malloc (sizeof(struct stu));
	gets(p1->a);
	p1->next=0;
	while(!(p1->a[0]==101&&p1->a[1]==110&&p1->a[2]==100))
	{
		p1=(struct stu *) malloc (sizeof(struct stu));
		gets(p1->a);
		p1->next=p2;
		p2=p1;
	}
	return p1->next;
}
void print (struct stu *p)
{
	while(p!=0)
	{
		printf("%s\n",p->a);
		p=p->next;
	}
}
int main()
{
	struct stu *p;
	p=create();
	print(p);
	return 0;
}