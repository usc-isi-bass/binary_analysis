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
	char s[10000], w[10000];
	int i, j, k;
	int next[10000];
	scanf("%s%s", s, w);
	int ls=strlen(s), lw=strlen(w);
	//KMP???s?w???
	//??s?next??
	next[0]=-1;
	j=0;
	k=-1;
	while (j<=ls)
	{
		if (k==-1 || s[j]==s[k])
		{
			j++;
			k++;
			next[j]=k;
		}
		else
			k=next[k];
	}
	//??????
	i=0;
	j=0;
	while (i<lw)
	{
		if ((j==-1) || w[i]==s[j])
		{
			i++;
			j++;
		}
		else
			j=next[j];
		if (j>=ls)
			break;
	}
	printf("%d", i-ls);
}
