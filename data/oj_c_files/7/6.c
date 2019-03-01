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
	char s[300],a[300],b[300];
	int n,m,i,j,p;
	scanf("%s\n%s\n%s",s,a,b);
	n=strlen(s);
	m=strlen(a);

	for(i=0,j=0;i<m,j<n;j++)
	{
		if(a[i]==s[j])
		{
			p=j;
			i++;
			if(i==m) break;
		}
        else i=0; 
	}

	if(i==m)
		for(i=0;i<m;i++)
			s[p-m+1+i]=b[i];

	printf("%s\n",s);
}