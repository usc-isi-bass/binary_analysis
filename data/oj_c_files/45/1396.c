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
	char s[50],w[50];
	int i,j,k,a=0,b=0,c=0;
	int lens=0,lenw=0;
	scanf("%s%s",s,w);
	a=strlen(s);
	b=strlen(w);
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			for(k=0;k<b-j;k++)
			{
			    if(s[i]==w[j+k])
				{
				    c=j+k;
			        break;
				}
			}break;
		}break;
	}
	printf("%d",c);
	return 0;
}