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
	char a[2]={'e','r'},b[2]={'l','y'},c[3]={'i','n','g'};
	char s[20];
	int n,m,j,co;
	scanf("%d",&n);
	for(m=0;m<n;m++)
	{
		scanf("%s",s);
        co=strlen(s);
		if((s[co-2]==a[0]&&s[co-1]==a[1])||(s[co-2]==b[0]&&s[co-1]==b[1]))
		{
			for(j=0;j<co-2;j++)
				printf("%c",s[j]);
		}
		if(s[co-3]==c[0]&&s[co-2]==c[1]&&s[co-1]==c[2])
		{
			for(j=0;j<co-3;j++)
                printf("%c",s[j]);
		}
		printf("\n");
	}
	return 0;
}

