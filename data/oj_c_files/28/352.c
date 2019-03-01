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

void main()
{
	char ch[10000];
	gets(ch);
	char *p1=ch,*p2=ch;
	int n,i;
	n=strlen(ch);
	for(i=0;i<n;i++)
	{
		p2=&ch[i];
        if(ch[i]!=' '&&ch[i-1]==' ')
			p1=&ch[i];
		if(ch[i]!=' '&&ch[i+1]==' ')
			printf("%d,",p2-p1+1);
		if(ch[i+1]=='\0')
			printf("%d",p2-p1+1);
	}
}