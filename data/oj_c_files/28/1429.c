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
    int i,j,n,p;
	char ch[max];

	gets(ch);
	p=1;

	n=strlen(ch);
	for(i=0;i<n;i++)
	{
	    while((ch[i]==' ')&&(i<=n))
			i++;
		j=i;
		while((ch[j]!=' ')&&(j<=n))
			j++;
		if(j>=n) j--;
		if(p)
		{
		    printf("%d",j-i);
			p=0;
		}
		else
			printf(",%d",j-i);
		i=j;
	}

	return 0;
}