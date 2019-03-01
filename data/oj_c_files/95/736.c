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
	int i,s;
	char a[256],b[256];
	gets(a);
	gets(b);
	for(i=0;i<strlen(a);i++)
		if(a[i]>96)a[i]-=32;
	for(i=0;i<strlen(b);i++)
		if(b[i]>96)b[i]-=32;
	s=strcmp(a,b);
	if(s<0)cout<<'<';
	if(s>0)cout<<'>';
	if(s==0)cout<<'=';
	return 0;
}