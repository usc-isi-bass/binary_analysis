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
	char str[15],substr[4],*p,max,*q;
	int i,num=0,n;
	while(scanf("%s %s",str,substr)!=EOF)
	{

	
		n=strlen(str);
	    p=str;
	q=substr;
	max=*p;
	for(i=0;i<n;i++)
	{
		if(*(p+i)>max)
		{
			max=*(p+i);
			num=i;
		}
	}
	for(i=0;i<num+1;i++)
	    printf("%c",*(p+i));
	for(i=0;i<3;i++)
		printf("%c",*(q+i));
	for(i=num+1;i<n;i++)
		printf("%c",*(p+i));
	printf("\n");
	}
}