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
	int n,i,j;
	char ys[1000],hc[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&ys);
		for(j=0;j<1000;j++)
		{
			if(ys[j]=='\0')
			{
				hc[j]='\0';
			}
			switch (ys[j])
			{
				case 'G':
				hc[j]='C';
				break;
				case 'C':
				hc[j]='G';
				break;
				case 'A':
				hc[j]='T';
				break;
				case 'T':
				hc[j]='A';
				break;
			}
		}
		puts(hc);
	}
	return 0;
}