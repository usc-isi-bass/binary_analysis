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
	struct stu *next;
	char a[100];
};
void print(struct stu*p,int n)
{
	if(n>0)
	{
		printf("%s",p->a);
		printf("\n");
		print(p->next,n-1);
	}
}
int main()
{
	int n=1,i,m=100000;
	struct stu *p1,*p2;
	p1=(struct stu*)malloc(LEN);
	gets(p1->a);
		for(i=0;i<m;i++)
		{
			p2=(struct stu*)malloc(LEN);
			gets(p2->a);
			if(p2->a[0]!='e'&&p2->a[1]!='n'&&p2->a[2]!='d')
			{
				p2->next=p1;
				p1=p2;
				n+=1;
			}
			else
			{
				p2->next=p1;
				break;
			}
		}
		print(p2->next,n);
		return 0;
}