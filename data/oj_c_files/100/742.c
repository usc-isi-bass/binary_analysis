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
	char str[100];
	char mod[100]={"abcdefghijklmnopqrstuvwxyz"};
	int i,l,n,t,j;
	gets(str);
	l=strlen(str);
	for(i=0;i<26;i++)
	{
		n=0;
		t=100;
		for(j=l-1;j>=0;j--)
		{
		    if(str[j]==mod[i])
			{
				t=i;
				n++;
			}
		}
		if(t!=100)
		printf("%c=%d\n",mod[t],n);
	}
	t=0;
	for(j=0;j<l;j++)
	{
	
		if(str[j]>'a'&&str[j]<'z')
			t++;
	}
	if(t==0)
	printf("No");
	return 0;
}	
