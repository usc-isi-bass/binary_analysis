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
	char a[100],b[100];
	cin.getline(a,100);
	char *p=a,*q=b;
	for(;*p!='\0';)
	{
	if(*p==' '&&*(p+1)!=' ')
	{*q=' ';q++;p++;}
	else if(*p==' '&&*(++p)==' ')
	{
	}
	else
	*q++=*p++;
}
*q='\0';
cout<<b;
return 0;
}
