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
	struct a
	{
		char id[10];
		int age;
	}p,q,a[100],old[100],yog[100];
	int n,i=0,x=0,y=0,k,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d",a[i].id,&a[i].age);
		if(a[i].age>=60)
		{
			old[x]=a[i];
			x++;
		}
		if(a[i].age<60)
		{
			yog[y]=a[i];
			y++;
		}
	}
	for(k=1;k<x;k++)
	{
		for(i=0;i<x-1;i++)
		{
			if(old[i].age<old[i+1].age)
			{
				p=old[i+1];
				old[i+1]=old[i];
				old[i]=p;
			}
		}
	}
	for(i=0;i<x;i++)
	{
		printf("%s\n",old[i].id);
	}
	for(i=0;i<y;i++)
	{
		printf("%s\n",yog[i].id);
	}
	return 0;
}
