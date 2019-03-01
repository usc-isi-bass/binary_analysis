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
	char s1[50],s2[50];
	int i,j,t,a1[200],a2[200],l1,l2,l;
	for (i=0;i<200;i++)
	{
		a1[i]=0;
		a2[i]=0;
	}
	t=0;
	scanf("%s%s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if (l1!=l2) printf("NO\n");
	else
	{
		l=l1;
		for (i=0;i<l;i++)
		{
			a1[s1[i]]++;
			a2[s2[i]]++;
		}
		t=0;
		for (i=0;i<200;i++) if (a1[i]!=a2[i]) t=1;
		if (t==0) printf("YES\n");
		else printf("NO\n");
	}
}
