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
	int n,i,j,ans;
	char s[100];
	scanf("%d\n",&n);
	for (i=0;i<n;i++)
	{
		gets(s);
		ans=1;
		if ((s[0]=='_')||((s[0]>='a' && s[0]<='z')||(s[0]>='A' && s[0]<='Z')))
			for (j=1;j<strlen(s);j++)
				if ((s[j]!='_')&&(s[j]<'a' || s[j]>'z')&&(s[j]<'A' || s[j]>'Z')&&(s[j]<'0' || s[j]>'9'))
					ans=0;
				else continue;
		else 
			ans=0;
		printf("%d\n",ans);
	}
	return 0;
}

