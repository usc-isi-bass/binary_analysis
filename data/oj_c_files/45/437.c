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
	char s[50],w[50],*p,*a,*b,*posa,*posb;
	scanf("%s %s",s,w);
	a=posa=w;
	b=posb=s;
	for(;*a!=0;a++){
		if(*a!=*b)
			continue;
		posa=a;
		while(*a++==*b++){
			if(*b==0)
				p=posa;
			}
		b=posb;
	}

	printf("%d",p-w);
	return 0;
}