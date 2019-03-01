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

struct patient{
	char id[10];
	int age;
	struct patient* next;
	struct patient* last;
};
char temp[10];
int main()
{
	struct patient *p1,*p2,*head,p[N];
	int n,i,j,tmp;
	scanf("%d",&n);
	memset(p,0,sizeof(p));
	head=p+1;
	for(i=1;i<=n;i++)
	{
	 scanf("%s %d",p[i].id,&p[i].age);
	 p[i].last=p+i-1;
	 p[i].next=p+i+1;
	}
	head->last=NULL;
	p[i].next=NULL;
	for(i=n;i>1;i--)
	{
		for(j=1;j<n;j++)
		{
			if((p+j+1)->age>=60&&(p+j+1)->age>(p+j)->age)
			{
				memcpy(temp,(p+j)->id,sizeof(temp));
				memcpy((p+j)->id,(p+j+1)->id,sizeof(temp));
				memcpy((p+j+1)->id,temp,sizeof(temp));
				tmp=(p+j)->age;
				(p+j)->age=(p+j+1)->age;
				(p+j+1)->age=tmp;
			}
		}
	}
	for(;head!=NULL;head=head->next)
	printf("%s\n",head->id);
	
}