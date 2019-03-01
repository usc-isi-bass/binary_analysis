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
	struct stu *back;
	char info[number];
	struct stu *next;
}
main()
{
	char infos[number];
	char s[]="end";
	struct stu *head,*p1,*p2,*tail;
	
	gets(infos);
	p2=(struct stu *)malloc(Len);
	if (strcmp(infos,s)!=0)
	{
		head=p2;
		p2->back=NULL;
		strcpy(p2->info,infos);
		p2->next=NULL;
		gets(infos);
		p1=p2;
	}
	while(strcmp(infos,s)!=0)
	{
		p2=(struct stu *)malloc(Len);
		p1->next=p2;
		p2->back=p1;
		strcpy(p2->info,infos);
		p2->next=NULL;
		p1=p2;
		gets(infos);
	}
	tail=p1;
	while(p1)
	{
		printf("%s\n",p1->info);
		p1=p1->back;
	}
}