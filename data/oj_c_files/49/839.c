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

void pdjsc(char c[100])
{
	int i,j,k,l,m,n,p=0;
	char tp,a,b;
	l=strlen(c)-1;
	for(i=0;i<=l;i++)
	{if (c[i]==c[l-i]) continue;
	 else 
		{p=1;
		 break;
		}
	}
	if (p==0) printf("%s\n",c);
}
int main()
{
	int i,j,k,l,n,m,p=0;
	char tp,a,b;
	char c[100]={' '};
	char s[100]={' '};
    scanf("%s",s);
	l=strlen(s)-1;
	for(i=1;i<=l;i++)//i?????????-1?
		for (j=0;j<=l-i;j++)//j??????
		{for (k=0;k<=i;k++) c[k]=s[k+j];
			pdjsc(c);
		}
	return 7;
}
