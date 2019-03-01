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
	char s[101];
	char a[101];
	char b[101];
	int la, lb; /* Length of string a,b */
	char *p; /* position */
	char t[101];
	char *ss; /* position in s move right one-way */

	gets(s);
	scanf("%s", a);
	scanf("%s", b);
	la = strlen(a);
	lb = strlen(b);
	ss = s;
	while ((p=strstr(ss, a))!=NULL) {
		if ((p==s||*(p-1)==' ')&&(*(p+la)==' ')) {
			strcpy(t, p+la+1);
			strcpy(p, b);
			*(p+lb) = ' ';
			strcpy(p+lb+1, t);
		}
		if ((p==s||*(p-1)==' ')&&(*(p+la)=='\0')) {
			strcpy(p, b);
			*(p+lb) = '\0';
		}
		ss = p + la + 1;
	}
	puts(s);
	
	return 0;
}