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
	char str1[100],str2[100],c;
	int i;
	gets(str1);gets(str2);
    for(i=0;(c=str1[i])!='\0';i++)
	{	if(c>='a'&&c<='z')
			c=c-32;
	        str1[i]=c;
	}
    for(i=0;(c=str2[i])!='\0';i++)
	{	if(c>='a'&&c<='z')
			c=c-32;
	        str2[i]=c;
	}
	if(strcmp(str1,str2)>0)
		printf(">\n");
	if(strcmp(str1,str2)<0)
	printf("<\n");
if(strcmp(str1,str2)==0)
printf("=\n");
return 0;
}