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

change(char s[1000])
{
	int i,j,n=strlen(s);
	for(i=2;i<=n;i++)
		for(j=0;j<=n-i;j++)
			if(s[j]>s[j+1])
			{
				char c;
				c=s[j];
				s[j]=s[j+1];
				s[j+1]=c;
			}
}
void main()
{
	char s1[1000],s2[1000];
	scanf("%s%s",s1,s2);
	change(s1);
	change(s2);
	if(strcmp(s1,s2)==0)
		printf("YES");
	else
		printf("NO");
}