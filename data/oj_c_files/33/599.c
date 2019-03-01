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
	char s[300],a,b,c,d;
	a='A';
	b='T';
	c='G';
	d='C';
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&s);
		for(j=0;s[j];j++)
		{
			if(s[j]==a)
				s[j]=b;
			else if(s[j]==b)
				s[j]=a;
			else if(s[j]==c)
				s[j]=d;
			else if(s[j]==d)
				s[j]=c;

		}
		printf("%s\n",s);

		
	}

	


	

	return 0;

}