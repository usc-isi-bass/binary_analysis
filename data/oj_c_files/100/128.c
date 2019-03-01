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

main()
{
	int i,j,k=0,l,n[26];
	char s[300];
	gets(s);
	l=strlen(s);
	for(i=0;i<26;i++)
		n[i]=0;
	for(i=0;i<26;i++)
		for(j=0;j<l;j++)
			if(s[j]==i+'a')
				{
					n[i]++;
					k=1;
				}
	if(k==0)
		printf("No");
	else
	{
		for(i=0;i<26;i++)
			if(n[i]!=0)
				printf("%c=%d\n",(i+'a'),n[i]);
	}
}
