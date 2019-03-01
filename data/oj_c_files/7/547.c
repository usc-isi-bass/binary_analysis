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
	char s[256],sub[256],re[256];
	gets(s);
	gets(sub);
	gets(re);
	int i,length,lensub,j,k,ans=0;
	length=strlen(s);
	lensub=strlen(sub);
	for(i=0;i<length;i++)
		if(s[i]==sub[0])
		{
			for(j=0;j<lensub;j++)
				if(s[i+j]!=sub[j]) break;
			if(j==lensub)
			{
				ans=1;
				for(k=0;k<i;k++)
		            printf("%c",s[k]);
	            printf("%s",re);
	            for(k=i+lensub;k<length;k++)
		            printf("%c",s[k]);
				break;
			}
		}
	if(ans!=1) printf("%s",s);
	return 0;
}
