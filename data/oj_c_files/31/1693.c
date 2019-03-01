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
	char zifu[200];
	struct stu *next;
};
struct stu stu[1000];
void main()
{   int i;
	struct stu *p=stu;
	for(i=0;i<1000;i++,p++)
	{
		gets(p->zifu);
		char str[10]="end";
		if((strcmp(p->zifu,str))==0)
			break;
		p->next=(p-1);
	}
	p=p-1;
	stu[0].next=NULL;
	while(p!=NULL)
	{
		puts(p->zifu);
		p=p->next;
	}
}
