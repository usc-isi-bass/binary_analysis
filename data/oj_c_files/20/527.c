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
	char str1[11],cut[4],ans[20],*p,maxchar;
	int i,l,maxnum;
	while(scanf("%s%s",str1,cut)!=EOF)
	{
		p=str1;
		l=strlen(str1);
		maxchar=*p;
		maxnum=0;
		p++;
		for(i=1;i<l;i++,p++)
			if(*p>maxchar)
			{
				maxchar=*p;
				maxnum=i;
			}
		strcpy(ans,"");
		strncat(ans,str1,maxnum+1);
		strcat(ans,cut);
		strcat(ans,str1+maxnum+1);
		puts(ans);
	}
}