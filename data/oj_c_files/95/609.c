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
	char str1[80],str2[80];
	gets(str1);
	gets(str2);
	int i,j;
	for(i=0;i<strlen(str1);i++)
	{
		if(str1[i]>='a' && str1[i]<='z')
			str1[i]=str1[i]-32;
	}
for(j=0;j<strlen(str2);j++)
	{
		if(str2[j]>='a' && str2[j]<='z')
			str2[j]=str2[j]-32;
	}
	if(strcmp(str1,str2)>0)
		printf(">\n");
	if(strcmp(str1,str2)<0)
		printf("<\n");
	if(strcmp(str1,str2)==0)
		printf("=\n");
}