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

struct person 
{
	char ID[20];
	int age;
};
int main()
{
	struct person a[100]={0}, b[100]={0},t;
	int n, i,j, k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d",a[i].ID,&a[i].age);
		if(a[i].age>=60)
		{
			b[k]=a[i];
			k++;
		}

	}
	for(i=0;i<k-1;i++)
		for(j=0;j<k-1-i;j++)
		{
			if(b[j].age<b[j+1].age)
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;

			}
		}
		for(i=0;i<k;i++)
		{
			puts(b[i].ID);
			printf("\n");
		}
		for(i=0;i<n;i++)
		{
			if(a[i].age<60)
			{
				puts(a[i].ID);
				printf("\n");
			}
		}
		return 0;
}