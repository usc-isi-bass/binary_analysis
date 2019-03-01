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

int locate(char s[], char w[])
{int m, k,len1,len2;
len1=strlen(s); len2=strlen(w);
m=0;
while(m+len1<=len2)
{
k=0;
while((k<len1)&&(s[k]==w[m+k])) ++k;
if(k==len1) return m;
m++;
}
return -1; // ???
}
int main()
{
	char s[50],w[50];
	scanf("%s %s",s,w);
	int a;
	a=locate(s,w);
	printf("%d",a);
	return 0;
}
