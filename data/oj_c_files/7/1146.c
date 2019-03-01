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
    char f(char str[],char substr[],char rep[]);
	char str[256],substr[256],rep[256];
	scanf("%s %s %s",str,substr,rep);
    f(str,substr,rep);
	puts(str);
}
char f(char str[256],char substr[256],char rep[256])
{
	char s[256];
	int i=0,j,k;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==substr[0])
		{
		   	for(j=0;j<strlen(substr);j++)
				s[j]=str[j+i];
			s[j]='\0';
			if(strcmp(substr,s)==0)
			{
				for(k=0;k<strlen(rep);k++,i++)
					str[i]=rep[k];
				return 0;
			}
		}
	}
	return 0;
}
