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

int main()
{
	struct pa
	{
		char id[10];
		int age;
	}pat[100],p1[100],p2[100],temp;
	int i,n,j=0,k=0,m;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>pat[i].id>>pat[i].age;
	}
	for(i=0;i<n;i++)
	{
		if(pat[i].age>=60)
		{
			p1[j]=pat[i];
			j++;
		}
		else
		{
			p2[k]=pat[i];
			k++;
		}
	}
	for(i=j-1;i>0;i--)
	{
		for(m=0;m<i;m++)
		{
			if(p1[m].age<p1[m+1].age)
			{
				temp=p1[m];
				p1[m]=p1[m+1];
				p1[m+1]=temp;
			}
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%s\n",p1[i].id);
	}
	for(i=0;i<k;i++)
	{
		printf("%s\n",p2[i].id);
	}
	return 0;
}