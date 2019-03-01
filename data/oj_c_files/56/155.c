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

int main(int argc, char* argv[])
{   
	char str[10],a;
	int i=0,n;
	gets(str);
	char *p=str;
	do{
         i++;
		 p++;
		 a=*p;
	}while(a!='\0');
	n=i;
	char s[10];
	for(i=0;i<n;i++)s[i]=str[n-i-1];
	for(i=0;i<n;i++)printf("%c",s[i]);
    return 0;
}