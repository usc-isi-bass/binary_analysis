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
	int n,i,j,k;
	char str[11];
	char substr[4];
    char t;
	while(scanf("%s%s",str,substr)!=EOF)
	{
		t=str[0];k=0;
		for(i=1;str[i]!='\0';i++)
		{
			if( (str[i]-t)>0 )
			{
                t=str[i]; k=i;
			}
		}
		for(i=0;i<=k;i++)
		{
			printf("%c",str[i]);
		}
		for(i=0;substr[i]!='\0';i++)
		{
			printf("%c",substr[i]);
		}
		for(i=k+1;str[i]!='\0';i++)
		{
			printf("%c",str[i]);
		}
		printf("\n");
	}
	return 0;
}

