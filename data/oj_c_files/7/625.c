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

char a[2000];
char sub[2000];
int b[2000];
int main()
{
	gets(a);
	gets(sub);
	int i=0,j=0,l=strlen(a),l_sub=strlen(sub);
	while(i<l)
	{
		for(j=0;j<l_sub;j++)
		{
			if(a[i+j]==sub[j])
			{
				b[i]++;
			}
		}
		i++;
	}
	int k=0,count=0,w=999;
	for(k=0;k<2000;k++)
	{
		if(b[k]==l_sub)
		{
			w=k;
			count++;
			break;
		}
	}
	char c[300];
	gets(c);
	int q=0;
	if(count!=0)
	{
	while(q<l)
	{
		if(q==w)
		{
			printf("%s",c);
			q+=l_sub;
		}
		if(q!=l)
		{printf("%c",a[q]);}
		q++;
	}
	}
	else if(count==0)
	{
		puts(a);
	}
	return 0;
}