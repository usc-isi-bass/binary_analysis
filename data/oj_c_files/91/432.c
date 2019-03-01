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
	char str[101],s[101]={""};
	int i,n;
	char *p;
	gets(str);
	n=strlen(str);
	p=str;
	for(i=0;i<n-1;i++)
        s[i]=*(p+i)+*(p+i+1);
	s[n-1]=*p+*(p+n-1);
    printf("%s",s);
	return 0;
}