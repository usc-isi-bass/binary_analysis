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
	char information[100];
	struct student *previous;
};

void main()
{
	struct student *p1,*p2,*p;
	p1=z;
	p1->previous=NULL;
	gets(p1->information);
	do{
		p2=z;//???p1,p2??????????????
		p2->previous=p1;
		p1=p2;
     	gets(p2->information);
	} while(strcmp(p1->information,"end"));
	p1=p1->previous;
	for(p=p1;p;p=p->previous)
	    puts(p->information);
}
