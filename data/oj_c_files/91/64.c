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

int main(int argc, char* argv[])
{
	char c[1000]={'\0'},q[1000]={'\0'};
		gets(c);
	int i=0,n=strlen(c);
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		{
			*(q+i)=*(c+i)+*(c+i+1);
		}
		else *(q+i)=*(c+i)+*c;
	}
	printf("%s",q);
	return 0;
}