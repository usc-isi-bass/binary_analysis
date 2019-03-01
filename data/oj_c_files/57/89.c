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
	char s[50][51],s2[50][51];
	int i,n,l,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
		l=strlen(s[i]);
		if((s[i][l-3]=='i')&&(s[i][l-2]=='n'))
			s[i][l-3]='\0';
		else
			s[i][l-2]='\0';
	}
	for(i=0;i<n;i++)
		printf("%s\n",s[i]);
}
