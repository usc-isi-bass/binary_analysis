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

int main()
{
	char s[10000];
	int rec[30], i, t, len,find;
	scanf("%d",&t);
	while (t-- > 0)
	{
		scanf("%s",s);
		len=strlen(s);
		find=0;
		memset(rec,0,sizeof(rec));
		for (i = 0; i < len ;i++)
			rec[s[i]-'a']++;
		for (i = 0; i < len ;i++)
			if (rec[s[i]-'a']==1)
			{
				printf("%c\n",s[i]);
				find=1;
				break;
			}
		if (find==0)
			printf("no\n");
	}
	return 0;
}