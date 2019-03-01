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

struct	STUDENT
{
 char student[100];
	struct STUDENT*	former;
};
int main()
{
	struct STUDENT*	p1 = (struct STUDENT*) malloc(sizeof(struct STUDENT));
	struct STUDENT*	p2;
	p1->former = NULL;
	for (gets(p1->student);p1->student[0]!='e'; gets(p1->student))
	{
		p2 = p1;
		p1 = (struct STUDENT*) malloc(sizeof(struct STUDENT));
		p1->former = p2;
	}
	for (p1=p1->former; p1!=NULL; p1=p1->former)
	{
		printf("%s\n", p1->student);
	}
	return 0;
}
