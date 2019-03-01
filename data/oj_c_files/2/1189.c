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


struct book
{
	int num;
	char au[30];
	struct book *next;
};
void main()
{
	int m;
	scanf("%d",&m);
	struct book *p1,*p2,*head;
	p1=(struct book*)malloc(LEN);
	scanf("%d %s",&p1->num,p1->au);
	p2=p1;
	head=p1;
	int n=1;
while(n<m)
{
	p1=(struct book*)malloc(LEN);
	scanf("%d %s",&p1->num,p1->au);
	p2->next=p1;
	p2=p1;
	n++;
}
p2->next=NULL;

char maxa;
char author;
char temp[30];
int an,maxn=0,i;
	struct book *p;

for(author='A';author<='Z';)
	{				
		p=head;
	an=0;
		while(p)
		{	
			strcpy(temp,p->au);

		
		for(i=0;(temp[i])!='\0';i++)
		{
		if(temp[i]==author){an++;break;}
		}
		p=p->next;
		}
if(an>maxn)
		{
		maxa=author;
		maxn=an;
}	
	author=author+1;
}
printf("%c\n%d",maxa,maxn);
p=head;
while(p)
{	
	strcpy(temp,p->au);
	for(i=0;(temp[i])!='\0';i++)
		{
		if(temp[i]==maxa)
		{	printf("\n");
			printf("%d",p->num);break;}
		}
	p=p->next;

}



}
