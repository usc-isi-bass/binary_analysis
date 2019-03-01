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
	int c[128]={0},l1,l2,i,b=0;
	char s1[1000],s2[1000];
	scanf("%s%s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	for(i=0;i<l1;i++)
		c[s1[i]]++;
	for(i=0;i<l2;i++)
		c[s2[i]]--;
	for(i=0;i<128;i++)
		b=b||c[i];
	if(!b)
		printf("YES");
	else
		printf("NO");
}
