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
	char a[80],b[80],t=0;
	int len,i;
	gets(a);
	gets(b);
	len=strlen(a);
	if(strlen(b)<=len)
		len=strlen(b);
	for(i=0;i<len;i++)
	{
		if(a[i]==b[i]||a[i]==b[i]-'a'+'A'||a[i]==b[i]+'a'-'A')
		{
			t++;
			continue;
		}
		if(a[i]<='z'&&a[i]>='a'&&b[i]<='z'&&b[i]>='a')
		{
			if(a[i]>b[i])
				printf(">");
			else
				printf("<");
			break;
		}
		if(a[i]<='Z'&&a[i]>='A'&&b[i]<='Z'&&b[i]>='A')
		{
			if(a[i]>b[i])
				printf(">");
			else
				printf("<");
			break;
		}
		if(a[i]<='Z'&&a[i]>='A'&&b[i]<='z'&&b[i]>='a')
		{
			b[i]=b[i]+'A'-'a';
			if(a[i]>b[i])
				printf(">");
			else
				printf("<");
			break;
		}
		if(b[i]<='Z'&&b[i]>='A'&&a[i]<='z'&&a[i]>='a')
		{
			b[i]=b[i]-'A'+'a';
			if(a[i]>b[i])
				printf(">");
			else
				printf("<");
			break;
		}
	}
	if(t==len&&strlen(a)==strlen(b))
		printf("=");
	if(t==len&&strlen(a)<strlen(b))
		printf("<");
	if(t==len&&strlen(a)>strlen(b))
		printf(">");
	return 0;
}
