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

char s(char a[]);
void main()
{
	int n,i;
	int a[100000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(a);
		if(s(a)=='N')
			printf("no\n");
		else
			printf("%c\n",s(a));
	}
}
char s(char a[])
{
	int i=0,j;
	while(a[i]!='\0')
	{
		j=0;
		while(a[j]!='\0')
		{
			if(i!=j&&a[i]==a[j])
				break;
			j++;
		}
		if(a[j]=='\0')
			return(a[i]);
		i++;
	}
	if(a[i]=='\0')
		return('N');
}