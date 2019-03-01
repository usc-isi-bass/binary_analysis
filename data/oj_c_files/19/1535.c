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

char str[101], a[101], b[101], c[101];
int i=0, len_str, len_a, len_b, pos;
int main(void)
{
	gets(str);
	len_str = strlen(str);
	scanf("%s%s", a, b);
	len_a = strlen(a);
	len_b = strlen(b);
	while(i<len_str)
	{
		pos=0;
		while(str[i]!=' ' && i < len_str)
			c[pos++]=str[i++];
		c[pos]='\0';
		if(strcmp(a, c)==0)
			printf("%s", b);
		else
			printf("%s", c);
		if(i==len_str)printf("\n");
		else printf(" ");
		i++;
	}
	return 0;
}
