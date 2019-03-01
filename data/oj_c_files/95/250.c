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

char z(char a)
{
	char y;
	if(a>=65&&a<=90)y=a+32;
	else y=a;
	return (y);
}
int main()
{
    char z(char a);
	char a[100],b[100],c[100],d[100];
	int x,y,i;
	gets(a);
	gets(b);
	x=strlen(a);y=strlen(b);
	for(i=0;i<=x;i++)c[i]=z(a[i]);
	for(i=0;i<=y;i++)d[i]=z(b[i]);
	  
	if(strcmp(c,d)<0)printf("<");
	else if(strcmp(c,d)==0)printf("=");
	 else printf(">");
   return 0;
}
