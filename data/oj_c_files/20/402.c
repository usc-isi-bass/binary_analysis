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

int max(char s1[11])
{
	int i,k=0;
	char c=0;
	for(i=0;i<strlen(s1);i++)
	{
		if(s1[i]>c) {c=s1[i];k=i;}
	}
	return(k);
}
void main()
{
	char s1[11],s2[4];
	int i,j,m;
	while (scanf("%s%s",s1,s2)!=EOF)
	{
		m=max(s1);
		for(i=0;i<=m;i++) printf("%c",s1[i]);
		printf("%s",s2);
		for(i=m+1;i<strlen(s1);i++) printf("%c",s1[i]);
		printf("\n");
	}
}

