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

	char a[301],*ps;

	gets(a);

	int i,j, flag = 0;

	for(i=65,j=0;i<91;i++)

	{

	    for(ps=a;*ps!='\0';ps++)

		{

			if(*ps==i)

			{

				j++;

			}

		}

		if(j!=0)

		{

		   printf("%c=",i);

		   printf("%d\n",j);

		   j=0;

		   flag = 1;

		}

	}

	for(i=97,j=0;i<123;i++)

	{

		for(ps=a;*ps!='\0';ps++)

		{

			if(*ps==i)

			{

				j++;

			}

		}

		if(j!=0)

		{

			printf("%c=",i);

			printf("%d\n",j);

			j=0;

			flag = 1;

		}

	}

	if(flag == 0)

		printf("No\n");



	return 0;

}

