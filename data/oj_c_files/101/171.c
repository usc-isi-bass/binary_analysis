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
	int a=0,b=0,c=0,word[3]={0},i=0;
	char rank[3]={0};
	for(a=0;a<=2;a++)
	{
		for(b=0;b<=2;b++)
		{
			if(b==a)
			{
				continue;
			}
			c=3-a-b;
			word[a]=(b>a)+(c==a);
			word[b]=(a>b)+(a>c);
			word[c]=(c>b)+(b>a);
			rank[a]=65;
			rank[b]=66;
			rank[c]=67;
			if(word[a]==2-a&&word[b]==2-b&&word[c]==2-c)
			{
				for(i=0;i<=2;i++)
				{
					cout<<rank[i];
				}
			}
		}
	}
	return 0;
}