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

main()
{
	int i,j=1;
	char s[1000];
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)	if(s[i]>=97) s[i]=s[i]-32;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i+1]==s[i]) j++;
		else 
		{
			printf("(%c,%d)",s[i],j);
			j=1;
		}
	}
}
