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

struct patient
{
	char No[10];
	int age;
}p[101];
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s%d",p[i].No,&p[i].age);
	}
	struct patient t;
	for (i=2;i<=n;i++)
	{
		if (p[i].age>=60)
		{
			for (j=i;j>1;j--)
			{
				if (p[j-1].age<p[j].age)
				{
					t=p[j-1];
					p[j-1]=p[j];
					p[j]=t;
				}
				else
					break;
			}
		}
	}
	for (i=1;i<=n;i++)
		printf("%s\n",p[i].No);
	return 0;
}