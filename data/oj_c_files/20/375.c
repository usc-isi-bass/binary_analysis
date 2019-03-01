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


main()
{
	int n,max,t;
	char str1[100],str2[5],*p1,*p2,*p0;
	while (scanf("%s %s",str1,str2)!=EOF)
	{
		n=strlen(str1);
		p1=str1;
		max=0;
		for (;p1<str1+n;p1++)
			if (*p1>max) 
			{
				max=*p1;
				p0=p1;
			}
		p2=str2;
		p1=str1;
		t=1;
		for (;p1<str1+n;p1++)
		{
			printf("%c",*p1);
			if (*p1==max&&t)
			{
				printf("%c%c%c",*p2,*(p2+1),*(p2+2));
				t=0;
			}
		}
		printf("\n");
	}
}