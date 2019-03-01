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
	int n,i,k,len[1000];
	char s[1000][256];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
		len[i]=strlen(s[i]);
		for(k=0;k<len[i];k++)
		{
			switch (s[i][k])
			{
			case 'A':
				{
					s[i][k]='T';
					break;
				}
			case 'T':
				{
					s[i][k]='A';
					break;
				}
			case 'C':
				{
					s[i][k]='G';
					break;
				}
			case 'G':
				{
					s[i][k]='C';
					break;
				}
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%s\n",s[i]);
	return 0;
}
