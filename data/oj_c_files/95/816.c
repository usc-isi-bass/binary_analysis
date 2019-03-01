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
	char strupr(char x);
	int i;
	char a[80],b[80],c[80],d[80];
	gets(a);
	gets(b);
	for(i=0;i<80;i++)
	{c[i]=strupr(a[i]);
	 d[i]=strupr(b[i]);}
	if(strcmp(c,d)>0) printf(">");
	else if(strcmp(c,d)<0) printf("<");
	else printf("=");
}
char strupr(char x)
{
	if(x>96&&x<123)
		return (x-32);
	else return (x);
}