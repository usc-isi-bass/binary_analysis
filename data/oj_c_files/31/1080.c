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


struct Student
{
	struct Student *prev;
	char number[30];
	char name[30];
	char gender;
	int age;
	double score;
	char address[30];
};

int main()
{
	struct Student a,*p;
	scanf("%s%s %c%d%lf%s",a.number,a.name,&a.gender,&a.age,&a.score,a.address);
	p=(struct Student *)malloc(LEN);
	*p=a;
	(*p).prev=NULL;
	for(;1;)
	{
		scanf("%s",a.number);
		if(a.number[0]=='e')
			break;
		scanf("%s %c%d%lf%s",a.name,&a.gender,&a.age,&a.score,a.address);
		a.prev=p;
		p=(struct Student *)malloc(LEN);
		*p=a;
	}
	printf("%s %s %c %d %g %s\n",p->number,p->name,p->gender,p->age,p->score,p->address);
	for(;(*p).prev!=NULL;)
	{
		p=p->prev;
		printf("%s %s %c %d %g %s\n",p->number,p->name,p->gender,p->age,p->score,p->address);
	}
	return 0;
}
