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
	char s[100];
	int n;
	cin>>n;
	int t=0;
	for (int i=0;i<n;i++)
	{
		cin>>s;
		if (t==0)
		{
			printf("%s",s);
			t+=strlen(s);
		}
		else
		{
			t+=strlen(s)+1;
			if (t<=80)
			{
				printf(" %s",s);
			}
			else
			{
				printf("\n%s",s);
				t=strlen(s);
			}
		}
	}
	
	return 0;
}