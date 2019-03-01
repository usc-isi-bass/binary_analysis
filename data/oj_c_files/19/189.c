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
	int i,k,n=0,p,j;
	char s[100],a[100],b[100];
	gets(s);gets(a);gets(b);
	
	i=0;
	while (a[i]!='\0') {n++;i++;}
	i=0;
	while(s[i]!='\0')
	{
		p=1;
		for(j=0;j<n;j++) if (a[j]!=s[i+j]) p=0;
		if(p) if (i>1&&s[i-1]!=' ') p=0;
		if (p) {printf("%s",b);i=i+n-1;}
		else printf("%c",s[i]);
		i++;
	}
	return 0;
}