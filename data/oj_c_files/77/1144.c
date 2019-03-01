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
	int len,i,j,b[101],top=0;
	char s[101],boy;
	gets(s);
	boy=s[0];
	for(i=0;s[i];i++)
	{
		if(s[i]==boy)
		{
			b[top]=i;
			top++;
		}
		else if(s[i]!=boy&&s[i]!=' ')
		{
			s[b[top-1]]=' ';
			s[i]=' ';
			printf("%d %d\n",b[top-1],i);
			top--;
		}
	}
	return 0;
}