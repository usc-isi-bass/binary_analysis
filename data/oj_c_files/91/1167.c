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
	int t,i,n,l;
	char s[300],a[300][300],ch;
gets(s);
l=strlen(s);
ch=s[0];
for (i=0;i<l-1;i++) s[i]=s[i]+s[i+1];
s[l-1]+=ch;
printf("%s",s);
}

