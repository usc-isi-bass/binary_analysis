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
	char *index,*i;
	int max;
	char str1[100],str2[5];
	while(scanf("%s%s",&str1,&str2)!=EOF)
	{
		max=0;
		for(i=str1;*i!='\0';i++)
			if(*i>max) max=*i,index=i;
		for(i=str1;i<=index;i++)
			printf("%c",*i);
		printf("%s",str2);
		for(i=index+1;*i!='\0';i++)
			printf("%c",*i);
		printf("\n");
	}

}