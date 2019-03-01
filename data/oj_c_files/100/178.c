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
	char a[300];
	int i,n,letter[26],total=0;
	gets(a);
	n=strlen(a);
	for(i=0;i<=25;i++)
		letter[i]=0;
	for(i=0;i<=n-1;i++)
		if(a[i]>='a'&&a[i]<='z')
			letter[a[i]-'a']++;
	for(i=0;i<=25;i++)
		if(letter[i]>0)
		{
			printf("%c=%d\n",i+'a',letter[i]);
			total++;
		}
	if(total==0)
		printf("No");
	getchar();
	getchar();
}
