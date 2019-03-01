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
	int a,b,c,i;
	int word[4];
	char rank[4];
	for(a=1;a<=3;a++)
		for(b=1;b<=3;b++)
			for(c=1;c<=3;c++)
			{
				word[a]=(b>a)+(c==a);
				word[b]=(a>b)+(a>c);
				word[c]=(c>b)+(b>a);
				rank[a]='A';
				rank[b]='B';
				rank[c]='C';
				if(word[3]==0&&word[2]==1&&word[1]==2)
				{
					for(i=1;i<=3;i++)
						cout<<rank[i];
					//break;
				}
			}
	cout<<endl;
	return 0;
}
				


