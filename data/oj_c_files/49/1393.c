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
	char s[501];
	gets(s);
	int i,p,q,l,n,j;
	n=strlen(s);
	for(l=1;l<n;l++)
		for(i=0;i<n-l;i++)
		{
			p=i;
			q=i+l;
			while(s[p]==s[q]&&p<q)
			{
				p++;
				q--;
			}
			if(q<=p)
			{
				for(j=i;j<=i+l;j++)
					printf("%c",s[j]);
				printf("\n");
			}
		}
		return 0;
}