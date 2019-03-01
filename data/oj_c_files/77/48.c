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
	char s[10000];
	char a,b;
	int n;
	
	gets(s);
	n=strlen(s);
	a=s[0];
	b=s[n-1];
	int i;
	for(i=1;i<n;i++)
	{
		if(s[i]==b)
		{
			int j;
			int first=0;
			for(j=i-1;j>=0;j--)
			{
				if(s[j]==a&&first==0)
				{
					printf("%d %d\n",j,i);
						first=1;
						s[i]=' ';
						s[j]=' ';
				}
			}
		
		}
		
	}
	

	return 0;
}
