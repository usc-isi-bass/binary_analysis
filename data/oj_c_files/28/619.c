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
	char str[10000];
	int i,n,word=0;
	gets(str);
	n=strlen(str);
	str[n]=' ';
	for(i=0;i<n+1;i++)
	{
		if(str[i]!=' ') word=word+1;
        else if(str[i]==' ' && i!=n && str[i-1]!=' ') {printf("%d,",word);
		                                               word=0;
		                                               }
		else if(i==n) printf("%d",word);
	}
}