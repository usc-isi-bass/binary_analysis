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
	char a[300],b[300],c[300];
	int i,j;
	gets(a);
	gets(b);
	gets(c);
	for(i=1;a[i-1]!='\0';i++)
	{
		if(a[i-1]==b[0])
		{
			for(j=1;b[j-1]!='\0';j++)
			{
				if(a[i-1+j-1]!=b[j-1])
					break;
			}
			if(b[j-1]!='\0')
				continue;
			else
			{
				for(j=i;b[j-i]!='\0';j++)
					a[j-1]=c[j-i];
			}
			break;
		}
		else
			continue;
	}
	puts(a);
	return 0;
}

