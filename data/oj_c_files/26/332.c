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
	char str1[100],str2[100];
	int i,len,j=0;
	gets(str1);
	len=strlen(str1);
	for(i=0;i<len;i++)
	{
		if(str1[i]!=' ')
		{
			str2[j]=str1[i];
			j++;
		}
		else
		{
			if(str1[i+1]!=' ')
			{
				str2[j]=str1[i];
				j++;
			}
		}
	}
	str2[j]='\0';
	printf("%s",str2);
}