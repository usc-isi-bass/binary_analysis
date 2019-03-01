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
	char s[16];
	s[15]=0;
	int i,len,p=15;
	while(gets(s)!='\0')
   {
		len=strlen(s)-5;
	for(i=len;i>=0;i--)
		if(s[i]>=s[p]) p=i;
	for(i=0;i<=p;i++)
		printf("%c",s[i]);
	for(i=len+2;i<=len+4;i++)
		printf("%c",s[i]);
	for(i=p+1;i<=len;i++)
		printf("%c",s[i]);
	printf("\n");
	}
}
