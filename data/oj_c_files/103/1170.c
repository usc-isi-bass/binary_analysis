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
	int x,u,i;
	char t;
	char s[10000];
	scanf("%s",s);
	x=strlen(s);
	for(i=0;i<x;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		s[i]=s[i]+'A'-'a';
	}
	u=1;
	t=s[0];
	if(x==1)
	printf("(%c,%d)",t,u);
	else if(x>1)
	{
	for(i=1;i<x;i++)
	{
		if(s[i]==t)
		{
			u++;
			if(i==x-1)
			printf("(%c,%d)",t,u);
		} 
		else
		{
			printf("(%c,%d)",t,u);
			t=s[i];
			u=1;
			if(i==x-1)
			printf("(%c,%d)",t,u);
		}
	}
	}
} 