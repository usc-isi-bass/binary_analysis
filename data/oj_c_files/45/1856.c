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
	char s[50],w[50];
	int i,k,lens,lenw,m=0;
	scanf("%s%s",s,w);
	lens=strlen(s);
	lenw=strlen(w);
	for(i=0;i<lenw;i++)
	{
		for(k=i;k<i+lens;k++)
		{
			if(s[k-i]!=w[k])
	          m=1;
		}
		if (m==0)
		{
			printf("%d",i);
                        break;
		}
		m=0;
		
	}
	return 0;
}

