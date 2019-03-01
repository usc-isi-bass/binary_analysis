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
	int i,j,n,m,k;
	char s[100],w[100];
	scanf("%s",s);
	scanf("%s",w);
	n=strlen(s);
	m=strlen(w);
	for(i=0;i<m;)
	{	k=i;
		for(j=0;j<n;j++,i++)
			if(s[j]!=w[i])
				goto loop;
			printf("%d",k);
loop:k=k+1;i=i+1;

	}
}
