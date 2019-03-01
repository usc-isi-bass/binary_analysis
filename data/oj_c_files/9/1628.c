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
	char id[20];
	int age;
};
int main()
{
	int i,n,j,max,num=0;
	struct patient a[110],t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d",a[i].id,&a[i].age);
	for(i=0;i<n;i++)
	{
		if(a[i].age>=60)
			num++;
	}
	for(i=0;i<num;i++)
	{
		max=i;
		for(j=i;j<n;j++)
		{
			if(a[j].age>a[max].age)
			{
				max=j;
			}
		}
		t=a[max];
		for(j=max;j>i;j--)
			a[j]=a[j-1];
		a[i]=t;
	}
	for(i=0;i<n;i++)
		printf("%s\n",a[i].id);
	return 0;
}
