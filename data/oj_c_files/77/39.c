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

char a;
char b;
char s[10000];
int numa=1;
int numb=0;
int ida[10000];
int idb[10000];
void test(int x);
int main()
{
	scanf("%c",&a);
	s[0]=a;
	int i;
	for(i=1;;i++)
	{
		scanf("%c",&s[i]);
		if(s[i]==a)
		{
			numa++;
		}
		else if(s[i]!=a)
		{
			b=s[i];
			numb++;
		}
		if(numa==numb)break;
	}
	test(0);
	for(i=0;i<(numa+numb)/2;i++)
	{
		printf("%d %d\n",ida[i],idb[i]);
	}
	return 0;
}

void test(int x)
{
	int i;
	for(i=0;i<numa+numb;i++)
	{
		if(s[i]==a)
		{
			ida[x]=i;
		}
		else if(s[i]==b)
		{
			idb[x]=i;
			s[ida[x]]=' ';
			s[i]=' ';
			if(x<(numa+numb)/2-1)
			{
				test(x+1);
			}
		}
	}
}
		

