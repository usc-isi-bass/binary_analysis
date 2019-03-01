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
	char s[500];
	int i=0,j,l,k,m;
	gets(s);
	l=strlen(s);
	for(j=0;j<=i;j++)
	{
		for(i=0;i+j+1<l;i++)
		{	
			for(k=0;k<=j;k++)
				if (s[i-k]!=s[i+1+k])
					break;
			if(k==j+1)
			{
				for(m=0;m<(j+1)*2;m++)
				printf("%c",s[i-j+m]);
				printf("\n");
			}
			if(i==l-1)
				break;
		}
	}
	return 0;
}