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
	char s[100+1],a[100+1],b[100+1];
	char *ss[100];
	int i,n=0;
	gets(s);
	gets(a);
	gets(b);
	ss[n++]=s;
ss[0] = s;
n = 1;
for (i=0; s[i] != '\0'; i++) {
if (s[i] == ' ') {
s[i] = '\0';
ss[n] = &s[i+1];
n++;
}
}
	for(i=0;i<n;i++)
	{
		if(i>0)
		{
			printf(" ");
		}
		if(strcmp(ss[i],a)==0)
		{
			printf("%s",b);
		}
		else
		{
			printf(ss[i]);
		}
	}
	return 0;
}
