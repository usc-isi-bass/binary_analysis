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

char s[100001];
int bucket[26];
int t, i, j, k, len;
int main(void)
{
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		for(k=0;k<26;k++)bucket[k]=0;
		scanf("%s", s);
		while(s[j]!='\0')
		{
			bucket[s[j]-'a']++;
			j++;
		}
		len=j;
		j=0;
		while(s[j]!='\0')
			if(bucket[s[j]-'a']==1)
			{
				printf("%c\n", s[j]);
				break;
			}
			else j++;
		if(j==len)printf("no\n");
		j=0;
	}
	return 0;
}

