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
	char s[50],w[50];
	int kw,ks,j;
	char *p;
	int q,r;
	scanf("%s %s",s,w);
	ks=strlen(s),kw=strlen(w);
	for(p=w+kw-1;p>=w;p--)
	{
		r=0;
		for(j=0;j<ks;j++)
		{
			if(w[p-w-j]!=s[ks-1-j]) r=1;
		}
		if(r==0) q=p-w-ks+1;
	}
	 printf("%d",q);
}

