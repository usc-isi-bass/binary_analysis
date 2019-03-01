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
	char c;
	int word=0,len,i,l=0,ans[300];
	while (1)
	{
		scanf("%c",&c);
		if (c!=' '&&c!='\n'&&word==0)
			{
				word=1;
				len=1;
			}
			else if ((c==' '||c=='\n')&&word==1)
			{
				word=0;
				ans[l++]=len;
			}
			else len++;
		if (c=='\n') break;
	}
	for (i=0;i<l;i++)
	{
		if (i!=0) printf(",");
		printf("%d",ans[i]);
	}
	printf("\n");
	return 0;
}