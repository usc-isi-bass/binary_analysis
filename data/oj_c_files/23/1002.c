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
	char s1[100];
	int i,j,num;
	gets(s1);
	num=strlen(s1);
	for(i=num-1;i>=0;i--)
	{
		if(s1[i]==' ') 
		{
			for(j=i+1;(s1[j]!=' '&& s1[j]!='\0');j++)
			{
				printf("%c",s1[j]);
			}
			printf(" ");
		}
		if(i==0)
			for(j=i;(s1[j]!=' '&& s1[j]!='\0');j++)
			{
				printf("%c",s1[j]);
			}
	}
}