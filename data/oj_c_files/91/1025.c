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
	char ch[101],str[101];
	char *p;
	int i,j,k;
	gets(ch);
	k=strlen(ch);
	p=ch;
	for (i=0;i<k-1;i++)
	{
		str[i]=*p+*(p+1);
		p++;
	}
	str[k-1]=*p+ch[0];
    for (i=0;i<k;i++)
		printf("%c",str[i]);
	return 0;
}