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



int main(int argc, char* argv[])
{
	char ch[101], *p ,a[101];
	int len,i=0;
	gets(ch);
	p=ch;
	len=strlen(ch);
	for(p=ch;p<ch+len;p++)
	{
		a[i]=*p+*(p+1);
		if(p==ch+len-1)
		a[i]=*(p)+ch[0];
		printf("%c",a[i]);
		i++;
	}printf("\n");
	return 0;
}
