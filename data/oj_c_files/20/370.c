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
	char a[11],b[4],c[15];
	while(scanf("%s",a)!=EOF)
	{
		scanf("%s",b);
		char *pa,*pb,*pc;
		char *pm;
		int len;
		pa=a;
		pb=b;
		pm=pa;
		len=strlen(a);
		for(;pa<a+len;pa++)
			if(*pm<*pa) pm=pa;
		for(pa=a,pc=c;pa<=pm;pa++,pc++)
			*pc=*pa;
		for(pb=b;pb<(b+3);pb++,pc++)
			*pc=*pb;
		for(;pa<(a+len);pa++,pc++)
			*pc=*pa;
		*pc='\0';
		printf("%s\n",c);
	}
	return 0;
}
