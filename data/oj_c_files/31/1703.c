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
	char a[100];
	struct student *pre;
};
struct student *creat()
{
	struct student *p1;struct student *p2;
	struct student *head;
	head=(struct student *) malloc(sizeof(struct student));
	p1=p2=head;
	head->pre=0;
	while(1)
	{
		p1=(struct student *)malloc(sizeof(struct student));
		p1->pre=p2;
		gets(p1->a);
		if(p1->a[0]=='e')
		{
			return (p2);
		}
		p2=p1;
	}
}
int main()
{
	struct student *p1;
	p1=creat();
	while(p1->pre!=0)
	{
		printf("%s\n",p1->a);
		p1=p1->pre;
	}
	return 0;
}
//?????????????????
