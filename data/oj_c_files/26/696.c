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
	char s[101],temp[101];
	gets(s);
	int i,j=0;
	
    for(i=0;i<strlen(s);i++)
	{
		if((s[i]!=' ')||(s[i-1]!=' '&&s[i]==' '))
		{
			
			temp[j]=s[i];
			j++;
		}
	}
	temp[j]='\0';
    puts(temp);
	return 0;
}

		
