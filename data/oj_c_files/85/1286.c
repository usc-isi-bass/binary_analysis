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

const int M = 21;

int main(int argc, char* argv[])
{
	char s[M];
	int n,i,j;
	scanf("%d",&n);
	i = n;
	while(i--)
	{
		scanf("%s",&s);
		for(j = 0;s[j]!='\0';j++)
		{
			//48-57 65-90 97-122
			if(!((s[j]=='_')||(s[j]>='0'&& s[j]<='9' && j>0)||(s[j]>='a'&& s[j]<='z')||(s[j]>='A'&& s[j]<='Z')))
				break;
		}
		printf(s[j] ? "no\n":"yes\n");
	}
	return 0;
}