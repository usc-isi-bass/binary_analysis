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

void f(char s[260],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		switch(s[i])
		{
		case 'A':printf("T");
			     break;
		case 'T':printf("A");
			     break;
		case 'G':printf("C");
			     break;
		case 'C':printf("G");
			     break;
		}
	}
	printf("\n");
}
int main()
{
	int t,n,i;
	char s[260];
	scanf("%d\n",&t);
	for(i=0;i<t;i++)
	{
		gets(s);
        n=strlen(s);
        f(s,n);
	}
   return 0;
}
