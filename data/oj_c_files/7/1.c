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
	int len,len2,i,j,f,ff;
	char s[300],sub[300],replace[300];
	gets(s);
	len=strlen(s);
	gets(sub);
	gets(replace);
	len2=strlen(sub);
	f=0;
	for (i=0; i<=len-len2;i++) {
		ff=1;
		for (j=0; j<len2; j++) 
			if (sub[j]!=s[i+j]) {ff=0; break;}
		if (ff==0) continue;
		for (j=0; j<i; j++) printf("%c",s[j]);
		printf("%s",replace);
		for (j=i+len2; j<len; j++) printf("%c",s[j]);
		f=1;
		break;
	}
	if (f==0) printf("%s",s);
	return 0;
}
