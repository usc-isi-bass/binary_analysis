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
	int i,t,l,flag;
	gets(s);
	l=strlen(s);
	flag=0;
	i=0;t=0;
	while(i<l)
	{
		if(s[i]=='-') 
		{
			flag=1;
			continue;
		}
		while(s[i]>='0' && s[i]<='9' && flag!=1)
		{
			t=1;
			printf("%c",s[i]);
			i++;
		}
		if(t==1)
		{t=0;printf("\n");continue;}
		if(flag==1 && (s[i]<'0' || s[i]>'9'))
		{flag=0;continue;}
		i++;	
	}
	return 0;
}