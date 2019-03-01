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
	char s[30][20]={0};
	char a[101]={0}, b[101]={0};
	char ch, (*p)[20];
	int i=0;
	ch=0;
	while (ch!='\n')
	{
		scanf("%s",s[i++]);
	ch=getchar();
	}

	gets(a);
	gets(b);

	p=&s[0];
	while(strcmp(*p,"")!=0)
	{
		if (strcmp(*p,a)==0) printf("%s",b);
		else printf("%s", *p);
		p++;
		if (strcmp(*p,"")!=0) printf(" ");
	}

}