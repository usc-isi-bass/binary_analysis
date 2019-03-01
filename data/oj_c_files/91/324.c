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


int main() {
	char s[101];
	cin.getline(s,101);
	char *p=s,*q=NULL;
	int len=strlen(s);
	char x=s[0];
	q=s+len-1;
	for(p=s;p<s+len-1;p++)
		*p=(char)((int)*p+(int)*(p+1));
	for(p=s;p<s+len-1;p++)
		cout<<*p;
	cout<<(char)((int)(*q)+(int)(x));

	return 0;
}
