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
	int i,j,m,n,len;
	char s[100],s1[100];
	gets(s);
	len=strlen(s);
	for(i=0;i<len-1;i++){
		s1[i]=s[i]+s[i+1];
		printf("%c",s1[i]);
	}
	printf("%c",s[0]+s[len-1]);
	return 0;
}

