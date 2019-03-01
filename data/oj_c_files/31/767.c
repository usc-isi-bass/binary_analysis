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
	char str[100];
    struct student *next;
	struct student *front;
};
struct student *create()
{
	struct student *head,*pf,*pa,*end;
	int n=1,flag=0;
	do
	{
		pa=(struct student *) malloc(LEN);
		gets(pa->str);
		if(strcmp(pa->str,"end")==0)
		{
			if(n==1) flag=1;
			break;
		}
		if(n==1)
		{
			head=pa;
			pf=pa;
			pa->front=NULL;
			n++;
		}
		else 
		{
			pf->next=pa;
			pa->front=pf;
			pf=pa;
		}
	 }while(n!=0);
	if(flag==0){pf->next=NULL;
	end=pf;}
	else{head=pa; end=NULL;}
    return(end);
}
int main()
{
	struct student *end,*pt;
	end=create();
	pt=end;
	while(pt!=NULL)
	{
		printf("%s\n",pt->str);
		pt=pt->front;
	}
	
	return 0;
}




