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
	int n,i,pass;
	struct patient
	{
		char id[L];
		int age;
	}men[M],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d",men[i].id,&men[i].age);
	for(pass=1;pass<n;pass++)
	{
		for(i=n-1;i>pass-1;i--)
		{
			if(men[i].age>=60&&men[i].age>men[i-1].age)
			{
				temp=men[i];
				men[i]=men[i-1];
				men[i-1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",men[i].id);
	}
	return 0;
}
