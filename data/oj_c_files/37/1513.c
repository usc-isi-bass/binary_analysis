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
char f[100000];
int t,i,j,k,a;
char b;
scanf("%d",&t);
gets(f);
for(i=0;i<t;i++)
{
	b='!';
	gets(f);
	for(j=0;j<strlen(f);j++)
	{
		a=0;
		for(k=0;k<strlen(f);k++)
		{
			if(f[j]==f[k])
				a++;
		}
		if(a==1)
		{
			b=f[j];
		break;
		}
		else
			;
	}
	if(b=='!')
	printf("no");
	else
	printf("%c\n",b);
}
	return 0;
}