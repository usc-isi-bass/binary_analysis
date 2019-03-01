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
	int i,j,m,a[26]={0},max=0;
	struct book
	{
		int no;
		char w[26];
	}
	s[1000];
	scanf("%d",&m);
    for (i=0;i<m;i++)
	{
		scanf("%d %s",&s[i].no,s[i].w);
		for (j=0;j<strlen(s[i].w);j++)
			a[s[i].w[j]-'A']++;
	}
	for (i=0;i<26;i++)
	if (a[i]>a[max])
			max=i;
    printf("%c\n%d\n",max+'A',a[max]);
	for (i=0;i<m;i++)
		for (j=0;j<strlen(s[i].w);j++)
			if (s[i].w[j]==max+'A')
				printf("%d\n",s[i].no);
    
}
