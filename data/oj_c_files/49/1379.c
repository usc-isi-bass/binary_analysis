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
	char a[501];
	int i,k,len,l;
	gets(a);
	l=strlen(a);
	for(len=2;len<=l;len++)
	{
		for(i=0;i<=l-len;i++)
		{
			if(a[i]==a[i+len-1])
			{
				for(k=1;k<=len/2;k++)
				{
					if(a[k+i]!=a[i+len-1-k])
						break;
				}
				if(k>len/2)
				{
					for(k=i;k<i+len;k++)
						printf("%c",a[k]);
					printf("\n");
				}
			}
		}
	}
	return 0;
}