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
	char str[200],*p,wd;
	int i,n;
	gets(str);
	p=str;
	n=strlen(p);
	for(i=0;i<n;i++)
	{if(i!=n-1){wd=*(p+i)+*(p+i+1);
	printf("%c",wd);}
	else {wd=*(p+0)+*(p+i);
	printf("%c",wd);}}

	

}