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
	char s[1005];
	int i=0,j,k=1;
	gets(s);
	while(s[i]!='\0')
	{
		if(s[i]-'a'>=0&&s[i]-'z'<=0)
		s[i]=s[i]-'a'+'A';
		i++;
	}
	i=0;                           //i?????????? 
	while(s[i]!='\0')
	{
		if((s[i])!=(s[i+1]))
		{
			printf("(%c,%d)",s[i],k);
			k=1;
		}
		else k++;
		i++;
	}
} 