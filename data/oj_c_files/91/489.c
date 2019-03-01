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
    char s[101]={'\0'};
	char r[101]={'\0'};
	gets(s);
	int n;
	n=strlen(s);
	for(int i=0;i<n;i++)
	{
		int a;
		if(i!=n-1)
		{
			a=s[i]+s[i+1];
		    r[i]=a;
		}
		else
		{
			a=s[0]+s[i];
			r[i]=a;
		}
	}
	puts(r);
    return 0;
}