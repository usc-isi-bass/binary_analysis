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
	int i,j,k,n;
    char str[11],substr[4];
	while(scanf("%s %s",&str,&substr)!=EOF)
	{
		n=strlen(str);
		for(i=0;i<n;i++)
		{
			k=0;
			for(j=0;j<n;j++)
				if(str[i]>=str[j]) k++;
			if(k==n) break;
		}
		for(j=0;j<=i;j++) printf("%c",str[j]);
		printf("%s",substr);
		for(j=i+1;j<n;j++) printf("%c",str[j]);
	printf("\n");
	}
	return 0;
}