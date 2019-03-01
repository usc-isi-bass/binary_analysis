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
	char s[51],w[51],x[51];
	int i,j,k,a,b;
	scanf("%s%s",s,w);
	a=strlen(s);
	b=strlen(w);
	for(i=0;i<=b-a;i++)
	{
		if(w[i]==s[0])
		{
			for(j=i,k=0;w[j]==s[k]&&k<a;)
			{
				j++;
				k++;
			}
			if(k==a)
			{
				printf("%d\n",i);
				break;
			}
		}
	}
}