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


char name;
int num,k=0,t=0;
int nametimes[100]={0};
struct book
{
	unsigned int No;
	char Name[26];
}*p;
void operate()
{
	int i;
	for(i=65;i<91;i++)
		if(nametimes[i]>t)
		{
			t=nametimes[i];
			name=i;
		}
}
void print()
{
	struct book *pi;
	int i;
	printf("%c\n%d\n",name,t);
	for(pi=p;pi<p+num;pi++)
		for(i=0;pi->Name[i]!='\0';i++)
			if(pi->Name[i]==name)
			{
				if(k==0)
				{
					printf("%d",pi->No);
					k++;
				}
				else
					printf("\n%d",pi->No);
				break;
			}
}
main()
{
	scanf("%d",&num);
	struct book *pi;
	int i;
	p=(struct book*)malloc(num*sizeof(struct book));
	for(pi=p;pi<p+num;pi++)
	{
		scanf("%d %s",&pi->No,pi->Name);
		for(i=0;pi->Name[i]!='\0';i++)
			nametimes[(int)pi->Name[i]]++;
	}
	operate();
	print();
}
