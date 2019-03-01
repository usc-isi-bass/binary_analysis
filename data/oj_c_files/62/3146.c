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

char sen[256];
int len,i;
int del();
int main()
{
gets(sen);
len=strlen(sen);
for (i=0;i<len;i++)
{
if (sen[i]==32)
del();
}
for (i=0;i<len;i++)
{
	if (sen[i]!=126)
	printf("%c",sen[i]);
}
return 0;
}
int del()
{
	int j;
	for (j=i+1;j<len;j++)
	{
		if (sen[j]==32)
		sen[j]=126;
		else 
		return 0;
	}
	return 0;
}