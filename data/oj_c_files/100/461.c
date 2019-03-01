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
	int i=0, b[26]={0}, sum=0, j;
	char s[300];
    scanf ("%s", s);
	while(s[i]) {
		j=s[i]-'a';
		if(j>=0&&j<=25) {
			b[j]++;
		sum=1;
		}
		i++;
	}
	for (j=0; j<26; j++) {
		if (b[j]!=0) printf("%c=%d\n", (j+'a'),b[j]);
	}
	if (sum==0) printf("No");
	return 0;
}
