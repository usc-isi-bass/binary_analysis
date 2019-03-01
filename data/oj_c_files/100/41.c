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

void main()
{
	char a[300];
	int letter[26],num[26];
	int i,j=0,n,p=0,q;
	gets(a);
	n=strlen(a);
	for(i=0;i<26;i++)
		num[i]=0;
	for(i='a',q=0;i<='z';i++,q++)
	{
		for(j=0;j<n;j++)
			if(a[j]==i)
			{
				letter[q]=i;
				num[q]++;
				p++;
			}
		
	}
	if(p==0)printf("No\n");
	else
		for(j=0;j<26;j++)
			if(num[j]!=0)
				printf("%c=%d\n",letter[j],num[j]);
}