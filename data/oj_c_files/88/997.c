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
	char s1[300],s2[300];
	char *p1=s1,*p2=s2;
	int k=0;
	
	gets(s1);
	for (;*p1!='\0';p1++)
	{
		if (*p1>='0' && *p1<='9')
		{
			k++;
			*p2=*p1;
			p2++;
		}
		else if (k)
		{
			k=0;
			*p2='\0';
			p2=s2;
			cout<<s2<<endl;
		}
	}
	if (k)
	{
		*p2='\0';
		cout<<s2<<endl;
	}
	
	return 0;
}