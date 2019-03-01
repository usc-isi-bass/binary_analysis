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
	char s[1000];
	int i,n,b,j,k,x;
scanf("%s",s);
n=strlen(s);

for (i=2;i<=n;i++)
{
	
	for (k=0;k<=n-i;k++)
	{b=0;
		for (j=0;j<i;j++)
			if (s[k+j]==s[k+i-j-1])
				b++;
			if(b==i)
			{
				for (x=k;x<k+j;x++)
printf("%c",s[x]);				printf("\n");
			}
	}
}
	



			return 0;
}
