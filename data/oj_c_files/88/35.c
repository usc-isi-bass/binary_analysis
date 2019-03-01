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
	char s[31],temp[31];
	int j=0,c=0;
	gets(s);
	while(s[j]!='\0')
	{
		if(s[j]>='0'&&s[j]<='9')
		temp[c++]=s[j];
		else 
		{
			temp[c]='\0';
			c=0;
			printf("%s\n",temp);
		}
		j++;
	}
	temp[c]='\0';
	printf("%s",temp);
	return 0;
}
		
		
	
