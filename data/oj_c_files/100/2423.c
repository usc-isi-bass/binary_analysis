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

struct word
{
	char a;
	int n;
}w[52],tmp;

int main()
{
	char s[301];
	int i,sign=0,j;
	scanf("%s",s);

	for(i=0;i<=25;i++)
	{	w[i].a=65+i;
	w[i].n=0;}
	for(i=26;i<52;i++)
	{	w[i].a=71+i;
	w[i].n=0;}


	for(i=0;s[i]!='\0';i++)
	{
		for(j=0;j<52;j++)
		{
			if(s[i]==w[j].a)
			{
				w[j].n++;
				sign=-1;
				break;
			}
		}
	}
	if(sign==0)
		printf("No");
	else
	{
		for(i=0;i<52;i++)
		{
			if(w[i].n==0)
				continue;
			else
			{
				printf("%c=%d\n",w[i].a,w[i].n);
			}
		}
	}
	return 0;
}

