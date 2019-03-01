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

// ??????????.cpp : ??????????????
//


struct student
{
	char info[100];
	struct student *pre;
};

struct student *creat()
{
	struct student *p1,*p2,*head;
	p1=(struct student*)malloc(L);
	gets(p1->info);
	if(strcmp(p1->info,"end")==0) 
	{
		return(NULL);
		exit;
	}
	else 
	{
	    p2=NULL;
	    for(int i=1;;i++)
	    {
		    p1->pre=p2;
		    p2=p1;
		    p1=(struct student*)malloc(L);
		    gets(p1->info);
		    if(strcmp(p1->info,"end")==0) break;
	    }
	    p1->pre=p2;
	    head=p1->pre;
	    return(head);
    }
}

int main()
{
	struct student *p;
	p=creat();
	while(p!=NULL)
	{
		printf("%s\n",p->info);
		p=p->pre;
	};
	return 0;
}
