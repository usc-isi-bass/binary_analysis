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
	char s[101];
	int i,j,len;
	char si;
	for(i=0;i<101;i++){
		s[i]=0;
	}
	gets(s);
	len=strlen(s);
	si=s[0];
	for(i=0;i<len-1;i++){
		s[i]=s[i]+s[i+1];
	}
	s[len-1]=s[len-1]+si;
	printf("%s",s);
}