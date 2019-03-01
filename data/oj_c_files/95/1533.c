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

int  main()
{
	char a[81]={0};
	char b[81]={0};
	gets(a);
	gets(b);
	int len1=strlen(a);
	int len2=strlen(b);
	for(int i=0;i<len1;i++)
		a[i]=toupper(a[i]);
	for(int i=0;i<len2;i++)
		b[i]=toupper(b[i]);
	if(strcmp(a,b)>0)
	   printf("%c",'>');
	else
	   if(strcmp(a,b)<0)
	      printf("%c",'<');
	   else
	      printf("%c",'=');
}