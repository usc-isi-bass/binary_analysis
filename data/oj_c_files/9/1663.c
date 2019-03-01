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

struct bing
{
	char id[10];
	int age;
	int num;
}bing[100],temp;
int main ()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",&bing[i].id,&bing[i].age);
		bing[i].num=i+1;
	}
	for(j=0;j<=n;j++)
	{
		for(i=0;i<n-1;i++)
		{
			if(bing[i+1].age>=60&&bing[i].age<bing[i+1].age)
			{
				temp=bing[i+1];
				bing[i+1]=bing[i];
				bing[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%s\n",bing[i].id);
	return 0;
}
