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
	char s[512],w[257],r[257];
	int m,n;
	int i,j,k;
	int t;
	scanf("%s%s%s",s,w,r);
	m=strlen(s);
	n=strlen(w);
	for(i=0;i<=m-n;i++)
	{
		t=0;
		for(j=0;j<n;j++)
		{
			if(w[j]!=s[i+j])
				t=1;
		}
		if(t==0)
			break;
	}
	if(t==0)
	{
		for(k=i;k<=i+n-1;k++)
		{
			s[k]=r[k-i];
		}
		printf("%s",s);
	}
	else
	{
		printf("%s",s);
	}
}