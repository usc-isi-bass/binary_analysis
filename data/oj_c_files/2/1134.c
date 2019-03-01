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
	int m,i,j;
	scanf("%d",&m);

	struct Bookinfo
	{
		int number;
		char auther[27];
	};

	struct Bookinfo a[1000];
	for (i=0;i<m;i++)
		scanf("%d %s",&a[i].number,a[i].auther);

	int count[26]={0},max,record;

	for (i=0;i<m;i++)
	{
		int k;
		k=strlen(a[i].auther);
		for (j=0;j<k;j++)
		{
			count[a[i].auther[j]-'A']++;
		}
	}

	max=count[0];
	for (i=0;i<26;i++)
		if (count[i]>=max) 
		{
			max=count[i];
			record=i;
		}

	printf("%c\n%d\n",record+'A',max);

	for (i=0;i<m;i++)
	{
		int n;
		n=strlen(a[i].auther);
		for (j=0;j<n;j++)
			if (a[i].auther[j]==record+'A')
			{
				printf("%d\n",a[i].number);
				break;
			}
	}



	return 0;
}