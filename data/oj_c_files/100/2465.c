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

int main ()
{
	int a[52]={0};
	char s[320];
	int i;
	gets(s);
	for (i=0; s[i]; i++) {
		if(s[i]>='A'&&s[i]<='Z') a[s[i]-'A']++;
		if(s[i]>='a'&&s[i]<='z') a[s[i]-'a'+26]++;
	}
	int q=0;
	for (i=0; i<26; i++) {
		if (a[i]>0) {
			printf("%c=%d\n", 'A'+i, a[i]);
			q=1;
		}
	}
	for (i=26; i<52; i++) {
		if (a[i]>0) {
			printf("%c=%d\n", 'a'+i-26, a[i]);
			q=1;
		}
	}
	if(q==0) printf("No");
	return 0;
}
