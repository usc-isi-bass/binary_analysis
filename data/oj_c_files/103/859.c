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
	char s[1000]={" "};
	int n,i=0,j,p=1;
	gets(s);
	n=strlen(s);
	while(i<n)
	{
		if(s[i+1]==s[i]||s[i+1]==s[i]-32||s[i+1]==s[i]+32)
		{
			p++;
			i++;
		}
		else
		{
			if(s[i]>='a'&&s[i]<='z')
				s[i]=s[i]-32;
			
			
			printf("(%c,%d)",s[i],p);
			i++;
			p=1;
		}
	}return 0;
}


