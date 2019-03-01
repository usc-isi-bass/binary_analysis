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

int a[26]={0},b[26]={0};
char ch,i,flag;
void main()
{
	scanf("%c",&ch);
	while (ch!='\n')
	{
		if (ch<='z' && ch>='a')
			a[ch-'a']++;
		if (ch<='Z' && ch>='A')
			b[ch-'A']++;
		scanf("%c",&ch);
	}
	flag=0;
	for (i=0;i<26;i++)
		if (b[i]>0)
		{printf("%c=%d\n",i+'A',b[i]);flag=1;}
	for (i=0;i<26;i++)
		if (a[i]>0)
		{printf("%c=%d\n",i+'a',a[i]);flag=1;}
	if (flag==0) printf("No\n");
}