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
	char s1[80],s2[80];
	gets(s1);
	gets(s2);
	int i;

	for(i=0;s1[i]!='\0' || s2[i]!='\0';i++)
	{
		s1[i]=(s1[i]-'A')%32+'A';
        s2[i]=(s2[i]-'A')%32+'A';
		if(s1[i]==s2[i])
			continue;
		else
		{ 
			if(s1[i]>s2[i])
			{
				printf(">\n");
			    break;
			}
			else
			{	
				printf("<\n");
				break;
			}
		}

	}
	if( s1[i]=='\0')
		printf("=");
	return 0;
}

