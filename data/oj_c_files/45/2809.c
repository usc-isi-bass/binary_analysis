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
	char s[50],w[50];
scanf("%s ",s);
scanf("%s", w);
	int i,j=0;
	for(i=0;i<strlen(w);i++)
	{
		for(;j<strlen(s);)
		{
			if(s[j]==w[i])
			{
				j++;
			}
				break;
				
			
		}
		if(j==strlen(s))
		{
			printf("%d",i-j+1);
			break;
		}
	}

	return 0;
}

