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
	int i,j,p=0,k;
	char s[10000],ch[100],a[100],b[100];
	gets(s);
	gets(a);
	gets(b);
	for(i=0;s[i]!='\0';i++)
	{
	for(j=0;(s[i]!=' '&&s[i]!='\0');i++,j++)
			ch[j]=s[i];
	ch[j]='\0';
	if (strcmp(ch,a)==0) strcpy(ch,b);
	if (p>0) printf(" ");
	printf("%s",ch);
	for(k=0;k<=j;k++) ch[k]='\0';
	p++;
	}
}
