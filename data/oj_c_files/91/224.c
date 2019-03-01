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
	int n,i,a[100];
	char str1[100],str2[100];
	gets(str1);
	n=strlen(str1);
	for(i=0;i<n;i++)
		a[i]=str1[i]-'0';
	for(i=0;i<n-1;i++)
		str2[i]='a'+a[i]+a[i+1]-1;
	str2[n-1]='a'+a[n-1]+a[0]-1;
	str2[n]='\0';
	puts(str2);
	return 0;
}


   