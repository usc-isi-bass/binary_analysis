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

int len;
int checkbegin(char a[],int i)
{
	int j;
	for(j=i;j<len;++j)
		if(a[j]!=' ')
			return(j);
}
int checkend(char a[],int i)
{
	int j;
	for(j=i+1;j<=len;++j)
		if(a[j]==' '||a[j]=='\0')
			return(j);
}
main()
{
	char a[1000];
	int i=0,b;
	gets(a);
	len=strlen(a);
	b=checkend(a,checkbegin(a,i))-checkbegin(a,i);
	printf("%d",b);
	i=checkend(a,checkbegin(a,i))+1;
	while(i<=len)
	{
		b=checkend(a,checkbegin(a,i))-checkbegin(a,i);
		printf(",%d",b);
		i=checkend(a,checkbegin(a,i))+1;
	}
}