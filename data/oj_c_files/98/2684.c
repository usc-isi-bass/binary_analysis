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
	int n,i,l,s,t;
	char word[40];
	scanf("%d",&n);
	scanf("%s",word);
	printf("%s",word);
	l=strlen(word);
	s=l;
	t=0;
	for(i=1;i<=n-1;i++)
	{
		scanf("%s",word);
		l=strlen(word);
		s+=l;
		t++;
		if(s+t<=80)
			printf(" %s",word);
		else
		{
			printf("\n");
			printf("%s",word);
			s=l;
			t=0;
		}
	}
}


