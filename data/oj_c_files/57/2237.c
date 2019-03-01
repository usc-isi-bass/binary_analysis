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
	char word[max];
	int p,n,i;
	void del(int x,char word[max]);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",word);
		p=strlen(word)-1;
		del(p,word);
		printf("%s\n",word);
	}
}

void del(int x,char word[max])
{
	if(word[x]=='g')
		word[x-2]=0;
	else
		word[x-1]=0;
}