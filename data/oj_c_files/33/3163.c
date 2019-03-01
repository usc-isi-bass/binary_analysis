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
	int n, i;
	char s[255];
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%s", s);
		int len=strlen(s);
		char s1[255]={'\0'};
		for(int j=0;j<len;j++)
		{
			if(s[j]=='A')
			{
				s1[j]='T';
			}
			else if(s[j]=='T')
			{
				s1[j]='A';
			}
			else if(s[j]=='C')
			{
				s1[j]='G';
			}
			else if(s[j]=='G')
			{
				s1[j]='C';
			}
		}
		printf("%s\n", s1);
	}
	return 0;
}