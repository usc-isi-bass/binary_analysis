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
	int t,i,l,k;
	char s[300],a;
	gets(s);
	l=strlen(s);k=0;
	for(a='A';a<='Z';a++)
	{
		t=0;
		for(i=0;i<l;i++)
		{
			if(s[i]==a) {t=t+1;k=1;}
		}
		if(t!=0) printf("%c=%d\n",a,t);
	}
	for(a='a';a<='z';a++)
	{
		t=0;
		for(i=0;i<l;i++)
		{
			if(s[i]==a) {t=t+1;k=1;}
		}
		if(t!=0) printf("%c=%d\n",a,t);
	}
	if(k==0) printf("No");
	return 0;
}

