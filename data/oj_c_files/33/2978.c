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
	int n,i,j;
	char *p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p=(char *)malloc(225*4);
		scanf("%s",p);
		for(j=0;*(p+j)!='\0';j++)
			switch(*(p+j))
		{
			case 'T':printf("%c",'A');break;
			case 'A':printf("%c",'T');break;
			case 'C':printf("%c",'G');break;
			case 'G':printf("%c",'C');break;
		}
		printf("\n");
		free(p);
	}
}
			


		