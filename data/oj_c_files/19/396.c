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


void main()
{
	char s[100][100]={'\0'},a[100],b[100];
	int i=0,j,k;
	char (*ps)[100];

	do
	{
		scanf("%s",s[i]);
		i++;
	}
	while(getchar()!='\n');

	k=i;

	gets(a);
	gets(b);

	ps=&s[0];

	for(i=0;i<k;i++)
		if(strcmp(*(ps+i),a)==0)
		{
			for(j=0;*(*(ps+i)+j)!='\0';j++)
				*(*(ps+i)+j)='\0';
			strcpy(*(ps+i),b);
		}

		for(j=0;*(*(ps+0)+j)!='\0';j++)
			printf("%c",*(*(ps+0)+j));

		for(i=1;i<k;i++)
		{
			printf(" ");

			for(j=0;*(*(ps+i)+j)!='\0';j++)
				printf("%c",*(*(ps+i)+j));
		}



	

}
