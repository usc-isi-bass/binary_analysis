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

int i,j,len,n;
char s[1000];
int cnt[1000];

main()
{
	scanf("%d",&n);
	for (i = 0; i < n ;++i)
	{
		scanf("%s",s);
		len = strlen(s);
		memset(cnt,0,sizeof(cnt));
		for (j = 0; j < len; ++j)
			cnt[s[j]-'a']++;
		for (j = 0; j < len; ++j)
			if (cnt[s[j]-'a']==1) break;
		if (j<len) printf("%c\n",s[j]);
		else puts("no");
	}
	
}